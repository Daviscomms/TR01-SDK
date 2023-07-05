static const char* const errno_names[] = { 
        [EUNATCH] = "EUNATCH",
        [ENOCSI] = "ENOCSI",
        [EAFNOSUPPORT] = "EAFNOSUPPORT",
        [EREMCHG] = "EREMCHG",
        [EACCES] = "EACCES",
        [EDESTADDRREQ] = "EDESTADDRREQ",
        [EILSEQ] = "EILSEQ",
        [ESPIPE] = "ESPIPE",
        [ECOMM] = "ECOMM",
        [EPERM] = "EPERM",
        [EMLINK] = "EMLINK",
        [EL3RST] = "EL3RST",
        [EOWNERDEAD] = "EOWNERDEAD",
        [ENOTTY] = "ENOTTY",
        [EBADE] = "EBADE",
        [EBADF] = "EBADF",
        [EADV] = "EADV",
        [ERANGE] = "ERANGE",
        [ECANCELED] = "ECANCELED",
        [ETXTBSY] = "ETXTBSY",
        [ENOMEM] = "ENOMEM",
        [EKEYREJECTED] = "EKEYREJECTED",
        [EINPROGRESS] = "EINPROGRESS",
        [EL3HLT] = "EL3HLT",
        [ENOTBLK] = "ENOTBLK",
        [ERESTART] = "ERESTART",
        [ENOMSG] = "ENOMSG",
        [EALREADY] = "EALREADY",
        [EMULTIHOP] = "EMULTIHOP",
        [ETIMEDOUT] = "ETIMEDOUT",
        [ENODATA] = "ENODATA",
        [EINTR] = "EINTR",
        [ENOLINK] = "ENOLINK",
        [ECHILD] = "ECHILD",
        [ELOOP] = "ELOOP",
        [EIO] = "EIO",
        [ESTALE] = "ESTALE",
        [ENOTSOCK] = "ENOTSOCK",
        [ENOSR] = "ENOSR",
        [ELNRNG] = "ELNRNG",
        [ENOSYS] = "ENOSYS",
        [EDEADLK] = "EDEADLK",
        [EPIPE] = "EPIPE",
        [EBADMSG] = "EBADMSG",
        [EBFONT] = "EBFONT",
        [ERFKILL] = "ERFKILL",
        [EREMOTE] = "EREMOTE",
        [ETOOMANYREFS] = "ETOOMANYREFS",
        [EPFNOSUPPORT] = "EPFNOSUPPORT",
        [ESRMNT] = "ESRMNT",
        [ENONET] = "ENONET",
        [EBADSLT] = "EBADSLT",
        [ENOTNAM] = "ENOTNAM",
        [ENOBUFS] = "ENOBUFS",
        [ENOTEMPTY] = "ENOTEMPTY",
        [EADDRINUSE] = "EADDRINUSE",
        [EUCLEAN] = "EUCLEAN",
        [ENETRESET] = "ENETRESET",
        [EISDIR] = "EISDIR",
        [ECONNABORTED] = "ECONNABORTED",
        [ENOENT] = "ENOENT",
        [EHOSTUNREACH] = "EHOSTUNREACH",
        [EBADFD] = "EBADFD",
        [EISNAM] = "EISNAM",
        [EXFULL] = "EXFULL",
        [EFAULT] = "EFAULT",
        [EL2HLT] = "EL2HLT",
        [ENOKEY] = "ENOKEY",
        [EINVAL] = "EINVAL",
        [EDOM] = "EDOM",
        [EADDRNOTAVAIL] = "EADDRNOTAVAIL",
        [ESHUTDOWN] = "ESHUTDOWN",
        [ELIBSCN] = "ELIBSCN",
        [ENAVAIL] = "ENAVAIL",
        [ENOSTR] = "ENOSTR",
        [EOVERFLOW] = "EOVERFLOW",
        [EPROTO] = "EPROTO",
        [ENOMEDIUM] = "ENOMEDIUM",
        [EBUSY] = "EBUSY",
        [ENODEV] = "ENODEV",
        [EMSGSIZE] = "EMSGSIZE",
        [EKEYEXPIRED] = "EKEYEXPIRED",
        [EROFS] = "EROFS",
        [ELIBACC] = "ELIBACC",
        [EHWPOISON] = "EHWPOISON",
        [E2BIG] = "E2BIG",
        [ENOTDIR] = "ENOTDIR",
        [ECONNRESET] = "ECONNRESET",
        [EIDRM] = "EIDRM",
        [ENXIO] = "ENXIO",
        [EBADRQC] = "EBADRQC",
        [ENAMETOOLONG] = "ENAMETOOLONG",
        [ESOCKTNOSUPPORT] = "ESOCKTNOSUPPORT",
        [ELIBEXEC] = "ELIBEXEC",
        [EDOTDOT] = "EDOTDOT",
        [ETIME] = "ETIME",
        [EPROTONOSUPPORT] = "EPROTONOSUPPORT",
        [EBADR] = "EBADR",
        [ENOTRECOVERABLE] = "ENOTRECOVERABLE",
        [ENETUNREACH] = "ENETUNREACH",
        [EXDEV] = "EXDEV",
        [EDQUOT] = "EDQUOT",
        [EREMOTEIO] = "EREMOTEIO",
        [ENOSPC] = "ENOSPC",
        [ENOEXEC] = "ENOEXEC",
        [ECONNREFUSED] = "ECONNREFUSED",
        [EFBIG] = "EFBIG",
        [ESRCH] = "ESRCH",
        [ECHRNG] = "ECHRNG",
        [EHOSTDOWN] = "EHOSTDOWN",
        [ENOLCK] = "ENOLCK",
        [ENOTCONN] = "ENOTCONN",
        [ENOANO] = "ENOANO",
        [EISCONN] = "EISCONN",
        [EUSERS] = "EUSERS",
        [ENETDOWN] = "ENETDOWN",
        [ENOPROTOOPT] = "ENOPROTOOPT",
        [EMFILE] = "EMFILE",
        [EPROTOTYPE] = "EPROTOTYPE",
        [ELIBBAD] = "ELIBBAD",
        [ESTRPIPE] = "ESTRPIPE",
        [EAGAIN] = "EAGAIN",
        [ENFILE] = "ENFILE",
        [ELIBMAX] = "ELIBMAX",
        [EEXIST] = "EEXIST",
        [EL2NSYNC] = "EL2NSYNC",
        [ENOPKG] = "ENOPKG",
        [EMEDIUMTYPE] = "EMEDIUMTYPE",
        [EKEYREVOKED] = "EKEYREVOKED",
        [ENOTUNIQ] = "ENOTUNIQ",
        [EOPNOTSUPP] = "EOPNOTSUPP",
};
