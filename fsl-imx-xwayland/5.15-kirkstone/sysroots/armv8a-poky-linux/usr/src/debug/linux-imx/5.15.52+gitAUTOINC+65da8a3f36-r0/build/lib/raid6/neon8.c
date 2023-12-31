/* -----------------------------------------------------------------------
 *
 *   neon.uc - RAID-6 syndrome calculation using ARM NEON instructions
 *
 *   Copyright (C) 2012 Rob Herring
 *   Copyright (C) 2015 Linaro Ltd. <ard.biesheuvel@linaro.org>
 *
 *   Based on altivec.uc:
 *     Copyright 2002-2004 H. Peter Anvin - All Rights Reserved
 *
 *   This program is free software; you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, Inc., 53 Temple Place Ste 330,
 *   Boston MA 02111-1307, USA; either version 2 of the License, or
 *   (at your option) any later version; incorporated herein by reference.
 *
 * ----------------------------------------------------------------------- */

/*
 * neon8.c
 *
 * 8-way unrolled NEON intrinsics math RAID-6 instruction set
 *
 * This file is postprocessed using unroll.awk
 */

#include <arm_neon.h>

typedef uint8x16_t unative_t;

#define NSIZE	sizeof(unative_t)

/*
 * The SHLBYTE() operation shifts each byte left by 1, *not*
 * rolling over into the next byte
 */
static inline unative_t SHLBYTE(unative_t v)
{
	return vshlq_n_u8(v, 1);
}

/*
 * The MASK() operation returns 0xFF in any byte for which the high
 * bit is 1, 0x00 for any byte for which the high bit is 0.
 */
static inline unative_t MASK(unative_t v)
{
	return (unative_t)vshrq_n_s8((int8x16_t)v, 7);
}

static inline unative_t PMUL(unative_t v, unative_t u)
{
	return (unative_t)vmulq_p8((poly8x16_t)v, (poly8x16_t)u);
}

void raid6_neon8_gen_syndrome_real(int disks, unsigned long bytes, void **ptrs)
{
	uint8_t **dptr = (uint8_t **)ptrs;
	uint8_t *p, *q;
	int d, z, z0;

	register unative_t wd0, wq0, wp0, w10, w20;
	register unative_t wd1, wq1, wp1, w11, w21;
	register unative_t wd2, wq2, wp2, w12, w22;
	register unative_t wd3, wq3, wp3, w13, w23;
	register unative_t wd4, wq4, wp4, w14, w24;
	register unative_t wd5, wq5, wp5, w15, w25;
	register unative_t wd6, wq6, wp6, w16, w26;
	register unative_t wd7, wq7, wp7, w17, w27;
	const unative_t x1d = vdupq_n_u8(0x1d);

	z0 = disks - 3;		/* Highest data disk */
	p = dptr[z0+1];		/* XOR parity */
	q = dptr[z0+2];		/* RS syndrome */

	for ( d = 0 ; d < bytes ; d += NSIZE*8 ) {
		wq0 = wp0 = vld1q_u8(&dptr[z0][d+0*NSIZE]);
		wq1 = wp1 = vld1q_u8(&dptr[z0][d+1*NSIZE]);
		wq2 = wp2 = vld1q_u8(&dptr[z0][d+2*NSIZE]);
		wq3 = wp3 = vld1q_u8(&dptr[z0][d+3*NSIZE]);
		wq4 = wp4 = vld1q_u8(&dptr[z0][d+4*NSIZE]);
		wq5 = wp5 = vld1q_u8(&dptr[z0][d+5*NSIZE]);
		wq6 = wp6 = vld1q_u8(&dptr[z0][d+6*NSIZE]);
		wq7 = wp7 = vld1q_u8(&dptr[z0][d+7*NSIZE]);
		for ( z = z0-1 ; z >= 0 ; z-- ) {
			wd0 = vld1q_u8(&dptr[z][d+0*NSIZE]);
			wd1 = vld1q_u8(&dptr[z][d+1*NSIZE]);
			wd2 = vld1q_u8(&dptr[z][d+2*NSIZE]);
			wd3 = vld1q_u8(&dptr[z][d+3*NSIZE]);
			wd4 = vld1q_u8(&dptr[z][d+4*NSIZE]);
			wd5 = vld1q_u8(&dptr[z][d+5*NSIZE]);
			wd6 = vld1q_u8(&dptr[z][d+6*NSIZE]);
			wd7 = vld1q_u8(&dptr[z][d+7*NSIZE]);
			wp0 = veorq_u8(wp0, wd0);
			wp1 = veorq_u8(wp1, wd1);
			wp2 = veorq_u8(wp2, wd2);
			wp3 = veorq_u8(wp3, wd3);
			wp4 = veorq_u8(wp4, wd4);
			wp5 = veorq_u8(wp5, wd5);
			wp6 = veorq_u8(wp6, wd6);
			wp7 = veorq_u8(wp7, wd7);
			w20 = MASK(wq0);
			w21 = MASK(wq1);
			w22 = MASK(wq2);
			w23 = MASK(wq3);
			w24 = MASK(wq4);
			w25 = MASK(wq5);
			w26 = MASK(wq6);
			w27 = MASK(wq7);
			w10 = SHLBYTE(wq0);
			w11 = SHLBYTE(wq1);
			w12 = SHLBYTE(wq2);
			w13 = SHLBYTE(wq3);
			w14 = SHLBYTE(wq4);
			w15 = SHLBYTE(wq5);
			w16 = SHLBYTE(wq6);
			w17 = SHLBYTE(wq7);

			w20 = vandq_u8(w20, x1d);
			w21 = vandq_u8(w21, x1d);
			w22 = vandq_u8(w22, x1d);
			w23 = vandq_u8(w23, x1d);
			w24 = vandq_u8(w24, x1d);
			w25 = vandq_u8(w25, x1d);
			w26 = vandq_u8(w26, x1d);
			w27 = vandq_u8(w27, x1d);
			w10 = veorq_u8(w10, w20);
			w11 = veorq_u8(w11, w21);
			w12 = veorq_u8(w12, w22);
			w13 = veorq_u8(w13, w23);
			w14 = veorq_u8(w14, w24);
			w15 = veorq_u8(w15, w25);
			w16 = veorq_u8(w16, w26);
			w17 = veorq_u8(w17, w27);
			wq0 = veorq_u8(w10, wd0);
			wq1 = veorq_u8(w11, wd1);
			wq2 = veorq_u8(w12, wd2);
			wq3 = veorq_u8(w13, wd3);
			wq4 = veorq_u8(w14, wd4);
			wq5 = veorq_u8(w15, wd5);
			wq6 = veorq_u8(w16, wd6);
			wq7 = veorq_u8(w17, wd7);
		}
		vst1q_u8(&p[d+NSIZE*0], wp0);
		vst1q_u8(&p[d+NSIZE*1], wp1);
		vst1q_u8(&p[d+NSIZE*2], wp2);
		vst1q_u8(&p[d+NSIZE*3], wp3);
		vst1q_u8(&p[d+NSIZE*4], wp4);
		vst1q_u8(&p[d+NSIZE*5], wp5);
		vst1q_u8(&p[d+NSIZE*6], wp6);
		vst1q_u8(&p[d+NSIZE*7], wp7);
		vst1q_u8(&q[d+NSIZE*0], wq0);
		vst1q_u8(&q[d+NSIZE*1], wq1);
		vst1q_u8(&q[d+NSIZE*2], wq2);
		vst1q_u8(&q[d+NSIZE*3], wq3);
		vst1q_u8(&q[d+NSIZE*4], wq4);
		vst1q_u8(&q[d+NSIZE*5], wq5);
		vst1q_u8(&q[d+NSIZE*6], wq6);
		vst1q_u8(&q[d+NSIZE*7], wq7);
	}
}

void raid6_neon8_xor_syndrome_real(int disks, int start, int stop,
				    unsigned long bytes, void **ptrs)
{
	uint8_t **dptr = (uint8_t **)ptrs;
	uint8_t *p, *q;
	int d, z, z0;

	register unative_t wd0, wq0, wp0, w10, w20;
	register unative_t wd1, wq1, wp1, w11, w21;
	register unative_t wd2, wq2, wp2, w12, w22;
	register unative_t wd3, wq3, wp3, w13, w23;
	register unative_t wd4, wq4, wp4, w14, w24;
	register unative_t wd5, wq5, wp5, w15, w25;
	register unative_t wd6, wq6, wp6, w16, w26;
	register unative_t wd7, wq7, wp7, w17, w27;
	const unative_t x1d = vdupq_n_u8(0x1d);

	z0 = stop;		/* P/Q right side optimization */
	p = dptr[disks-2];	/* XOR parity */
	q = dptr[disks-1];	/* RS syndrome */

	for ( d = 0 ; d < bytes ; d += NSIZE*8 ) {
		wq0 = vld1q_u8(&dptr[z0][d+0*NSIZE]);
		wq1 = vld1q_u8(&dptr[z0][d+1*NSIZE]);
		wq2 = vld1q_u8(&dptr[z0][d+2*NSIZE]);
		wq3 = vld1q_u8(&dptr[z0][d+3*NSIZE]);
		wq4 = vld1q_u8(&dptr[z0][d+4*NSIZE]);
		wq5 = vld1q_u8(&dptr[z0][d+5*NSIZE]);
		wq6 = vld1q_u8(&dptr[z0][d+6*NSIZE]);
		wq7 = vld1q_u8(&dptr[z0][d+7*NSIZE]);
		wp0 = veorq_u8(vld1q_u8(&p[d+0*NSIZE]), wq0);
		wp1 = veorq_u8(vld1q_u8(&p[d+1*NSIZE]), wq1);
		wp2 = veorq_u8(vld1q_u8(&p[d+2*NSIZE]), wq2);
		wp3 = veorq_u8(vld1q_u8(&p[d+3*NSIZE]), wq3);
		wp4 = veorq_u8(vld1q_u8(&p[d+4*NSIZE]), wq4);
		wp5 = veorq_u8(vld1q_u8(&p[d+5*NSIZE]), wq5);
		wp6 = veorq_u8(vld1q_u8(&p[d+6*NSIZE]), wq6);
		wp7 = veorq_u8(vld1q_u8(&p[d+7*NSIZE]), wq7);

		/* P/Q data pages */
		for ( z = z0-1 ; z >= start ; z-- ) {
			wd0 = vld1q_u8(&dptr[z][d+0*NSIZE]);
			wd1 = vld1q_u8(&dptr[z][d+1*NSIZE]);
			wd2 = vld1q_u8(&dptr[z][d+2*NSIZE]);
			wd3 = vld1q_u8(&dptr[z][d+3*NSIZE]);
			wd4 = vld1q_u8(&dptr[z][d+4*NSIZE]);
			wd5 = vld1q_u8(&dptr[z][d+5*NSIZE]);
			wd6 = vld1q_u8(&dptr[z][d+6*NSIZE]);
			wd7 = vld1q_u8(&dptr[z][d+7*NSIZE]);
			wp0 = veorq_u8(wp0, wd0);
			wp1 = veorq_u8(wp1, wd1);
			wp2 = veorq_u8(wp2, wd2);
			wp3 = veorq_u8(wp3, wd3);
			wp4 = veorq_u8(wp4, wd4);
			wp5 = veorq_u8(wp5, wd5);
			wp6 = veorq_u8(wp6, wd6);
			wp7 = veorq_u8(wp7, wd7);
			w20 = MASK(wq0);
			w21 = MASK(wq1);
			w22 = MASK(wq2);
			w23 = MASK(wq3);
			w24 = MASK(wq4);
			w25 = MASK(wq5);
			w26 = MASK(wq6);
			w27 = MASK(wq7);
			w10 = SHLBYTE(wq0);
			w11 = SHLBYTE(wq1);
			w12 = SHLBYTE(wq2);
			w13 = SHLBYTE(wq3);
			w14 = SHLBYTE(wq4);
			w15 = SHLBYTE(wq5);
			w16 = SHLBYTE(wq6);
			w17 = SHLBYTE(wq7);

			w20 = vandq_u8(w20, x1d);
			w21 = vandq_u8(w21, x1d);
			w22 = vandq_u8(w22, x1d);
			w23 = vandq_u8(w23, x1d);
			w24 = vandq_u8(w24, x1d);
			w25 = vandq_u8(w25, x1d);
			w26 = vandq_u8(w26, x1d);
			w27 = vandq_u8(w27, x1d);
			w10 = veorq_u8(w10, w20);
			w11 = veorq_u8(w11, w21);
			w12 = veorq_u8(w12, w22);
			w13 = veorq_u8(w13, w23);
			w14 = veorq_u8(w14, w24);
			w15 = veorq_u8(w15, w25);
			w16 = veorq_u8(w16, w26);
			w17 = veorq_u8(w17, w27);
			wq0 = veorq_u8(w10, wd0);
			wq1 = veorq_u8(w11, wd1);
			wq2 = veorq_u8(w12, wd2);
			wq3 = veorq_u8(w13, wd3);
			wq4 = veorq_u8(w14, wd4);
			wq5 = veorq_u8(w15, wd5);
			wq6 = veorq_u8(w16, wd6);
			wq7 = veorq_u8(w17, wd7);
		}
		/* P/Q left side optimization */
		for ( z = start-1 ; z >= 3 ; z -= 4 ) {
			w20 = vshrq_n_u8(wq0, 4);
			w21 = vshrq_n_u8(wq1, 4);
			w22 = vshrq_n_u8(wq2, 4);
			w23 = vshrq_n_u8(wq3, 4);
			w24 = vshrq_n_u8(wq4, 4);
			w25 = vshrq_n_u8(wq5, 4);
			w26 = vshrq_n_u8(wq6, 4);
			w27 = vshrq_n_u8(wq7, 4);
			w10 = vshlq_n_u8(wq0, 4);
			w11 = vshlq_n_u8(wq1, 4);
			w12 = vshlq_n_u8(wq2, 4);
			w13 = vshlq_n_u8(wq3, 4);
			w14 = vshlq_n_u8(wq4, 4);
			w15 = vshlq_n_u8(wq5, 4);
			w16 = vshlq_n_u8(wq6, 4);
			w17 = vshlq_n_u8(wq7, 4);

			w20 = PMUL(w20, x1d);
			w21 = PMUL(w21, x1d);
			w22 = PMUL(w22, x1d);
			w23 = PMUL(w23, x1d);
			w24 = PMUL(w24, x1d);
			w25 = PMUL(w25, x1d);
			w26 = PMUL(w26, x1d);
			w27 = PMUL(w27, x1d);
			wq0 = veorq_u8(w10, w20);
			wq1 = veorq_u8(w11, w21);
			wq2 = veorq_u8(w12, w22);
			wq3 = veorq_u8(w13, w23);
			wq4 = veorq_u8(w14, w24);
			wq5 = veorq_u8(w15, w25);
			wq6 = veorq_u8(w16, w26);
			wq7 = veorq_u8(w17, w27);
		}

		switch (z) {
		case 2:
			w20 = vshrq_n_u8(wq0, 5);
			w21 = vshrq_n_u8(wq1, 5);
			w22 = vshrq_n_u8(wq2, 5);
			w23 = vshrq_n_u8(wq3, 5);
			w24 = vshrq_n_u8(wq4, 5);
			w25 = vshrq_n_u8(wq5, 5);
			w26 = vshrq_n_u8(wq6, 5);
			w27 = vshrq_n_u8(wq7, 5);
			w10 = vshlq_n_u8(wq0, 3);
			w11 = vshlq_n_u8(wq1, 3);
			w12 = vshlq_n_u8(wq2, 3);
			w13 = vshlq_n_u8(wq3, 3);
			w14 = vshlq_n_u8(wq4, 3);
			w15 = vshlq_n_u8(wq5, 3);
			w16 = vshlq_n_u8(wq6, 3);
			w17 = vshlq_n_u8(wq7, 3);

			w20 = PMUL(w20, x1d);
			w21 = PMUL(w21, x1d);
			w22 = PMUL(w22, x1d);
			w23 = PMUL(w23, x1d);
			w24 = PMUL(w24, x1d);
			w25 = PMUL(w25, x1d);
			w26 = PMUL(w26, x1d);
			w27 = PMUL(w27, x1d);
			wq0 = veorq_u8(w10, w20);
			wq1 = veorq_u8(w11, w21);
			wq2 = veorq_u8(w12, w22);
			wq3 = veorq_u8(w13, w23);
			wq4 = veorq_u8(w14, w24);
			wq5 = veorq_u8(w15, w25);
			wq6 = veorq_u8(w16, w26);
			wq7 = veorq_u8(w17, w27);
			break;
		case 1:
			w20 = vshrq_n_u8(wq0, 6);
			w21 = vshrq_n_u8(wq1, 6);
			w22 = vshrq_n_u8(wq2, 6);
			w23 = vshrq_n_u8(wq3, 6);
			w24 = vshrq_n_u8(wq4, 6);
			w25 = vshrq_n_u8(wq5, 6);
			w26 = vshrq_n_u8(wq6, 6);
			w27 = vshrq_n_u8(wq7, 6);
			w10 = vshlq_n_u8(wq0, 2);
			w11 = vshlq_n_u8(wq1, 2);
			w12 = vshlq_n_u8(wq2, 2);
			w13 = vshlq_n_u8(wq3, 2);
			w14 = vshlq_n_u8(wq4, 2);
			w15 = vshlq_n_u8(wq5, 2);
			w16 = vshlq_n_u8(wq6, 2);
			w17 = vshlq_n_u8(wq7, 2);

			w20 = PMUL(w20, x1d);
			w21 = PMUL(w21, x1d);
			w22 = PMUL(w22, x1d);
			w23 = PMUL(w23, x1d);
			w24 = PMUL(w24, x1d);
			w25 = PMUL(w25, x1d);
			w26 = PMUL(w26, x1d);
			w27 = PMUL(w27, x1d);
			wq0 = veorq_u8(w10, w20);
			wq1 = veorq_u8(w11, w21);
			wq2 = veorq_u8(w12, w22);
			wq3 = veorq_u8(w13, w23);
			wq4 = veorq_u8(w14, w24);
			wq5 = veorq_u8(w15, w25);
			wq6 = veorq_u8(w16, w26);
			wq7 = veorq_u8(w17, w27);
			break;
		case 0:
			w20 = MASK(wq0);
			w21 = MASK(wq1);
			w22 = MASK(wq2);
			w23 = MASK(wq3);
			w24 = MASK(wq4);
			w25 = MASK(wq5);
			w26 = MASK(wq6);
			w27 = MASK(wq7);
			w10 = SHLBYTE(wq0);
			w11 = SHLBYTE(wq1);
			w12 = SHLBYTE(wq2);
			w13 = SHLBYTE(wq3);
			w14 = SHLBYTE(wq4);
			w15 = SHLBYTE(wq5);
			w16 = SHLBYTE(wq6);
			w17 = SHLBYTE(wq7);

			w20 = vandq_u8(w20, x1d);
			w21 = vandq_u8(w21, x1d);
			w22 = vandq_u8(w22, x1d);
			w23 = vandq_u8(w23, x1d);
			w24 = vandq_u8(w24, x1d);
			w25 = vandq_u8(w25, x1d);
			w26 = vandq_u8(w26, x1d);
			w27 = vandq_u8(w27, x1d);
			wq0 = veorq_u8(w10, w20);
			wq1 = veorq_u8(w11, w21);
			wq2 = veorq_u8(w12, w22);
			wq3 = veorq_u8(w13, w23);
			wq4 = veorq_u8(w14, w24);
			wq5 = veorq_u8(w15, w25);
			wq6 = veorq_u8(w16, w26);
			wq7 = veorq_u8(w17, w27);
		}
		w10 = vld1q_u8(&q[d+NSIZE*0]);
		w11 = vld1q_u8(&q[d+NSIZE*1]);
		w12 = vld1q_u8(&q[d+NSIZE*2]);
		w13 = vld1q_u8(&q[d+NSIZE*3]);
		w14 = vld1q_u8(&q[d+NSIZE*4]);
		w15 = vld1q_u8(&q[d+NSIZE*5]);
		w16 = vld1q_u8(&q[d+NSIZE*6]);
		w17 = vld1q_u8(&q[d+NSIZE*7]);
		wq0 = veorq_u8(wq0, w10);
		wq1 = veorq_u8(wq1, w11);
		wq2 = veorq_u8(wq2, w12);
		wq3 = veorq_u8(wq3, w13);
		wq4 = veorq_u8(wq4, w14);
		wq5 = veorq_u8(wq5, w15);
		wq6 = veorq_u8(wq6, w16);
		wq7 = veorq_u8(wq7, w17);

		vst1q_u8(&p[d+NSIZE*0], wp0);
		vst1q_u8(&p[d+NSIZE*1], wp1);
		vst1q_u8(&p[d+NSIZE*2], wp2);
		vst1q_u8(&p[d+NSIZE*3], wp3);
		vst1q_u8(&p[d+NSIZE*4], wp4);
		vst1q_u8(&p[d+NSIZE*5], wp5);
		vst1q_u8(&p[d+NSIZE*6], wp6);
		vst1q_u8(&p[d+NSIZE*7], wp7);
		vst1q_u8(&q[d+NSIZE*0], wq0);
		vst1q_u8(&q[d+NSIZE*1], wq1);
		vst1q_u8(&q[d+NSIZE*2], wq2);
		vst1q_u8(&q[d+NSIZE*3], wq3);
		vst1q_u8(&q[d+NSIZE*4], wq4);
		vst1q_u8(&q[d+NSIZE*5], wq5);
		vst1q_u8(&q[d+NSIZE*6], wq6);
		vst1q_u8(&q[d+NSIZE*7], wq7);
	}
}
