# ===========================================================================
#       https://www.gnu.org/software/autoconf-archive/ax_prog_hla.html
# ===========================================================================
#
# SYNOPSIS
#
#   AX_PROG_HLA([ACTION-IF-NOT-FOUND])
#
# DESCRIPTION
#
#   This macro searches for the HLA assembler and sets the variable "hla" to
#   the name of the application or to "no" if not found. If
#   ACTION-IF-NOT-FOUND is not specified, configure will fail when the
#   program is not found.
#
#   Example:
#
#     AX_PROG_HLA()
#     AX_PROG_HLA([hla_avail="no"])
#
# LICENSE
#
#   Copyright (c) 2007,2009,2022 Bogdan Drozdowski <bogdro@users.sourceforge.net>
#
#   This program is free software: you can redistribute it and/or modify it
#   under the terms of the GNU Lesser General Public License as published by
#   the Free Software Foundation, either version 3 of the License, or (at
#   your option) any later version.
#
#   This program is distributed in the hope that it will be useful, but
#   WITHOUT ANY WARRANTY; without even the implied warranty of
#   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser
#   General Public License for more details.
#
#   You should have received a copy of the GNU Lesser General Public License
#   along with this program. If not, see <https://www.gnu.org/licenses/>.
#
#   As a special exception, the respective Autoconf Macro's copyright owner
#   gives unlimited permission to copy, distribute and modify the configure
#   scripts that are the output of Autoconf when processing the Macro. You
#   need not follow the terms of the GNU General Public License when using
#   or distributing such scripts, even though portions of the text of the
#   Macro appear in them. The GNU General Public License (GPL) does govern
#   all other use of the material that constitutes the Autoconf Macro.
#
#   This special exception to the GPL applies to versions of the Autoconf
#   Macro released by the Autoconf Archive. When you make and distribute a
#   modified version of the Autoconf Macro, you may extend this special
#   exception to the GPL to apply to your modified version as well.

#serial 12

AC_DEFUN([AX_PROG_HLA],[
	AC_CHECK_PROGS(hla,[hla],no)
	AS_IF([test "x$hla" = "xno"],
		ifelse($#,0,[AC_MSG_ERROR([HLA assembler not found])],
		$1)
	)
])
