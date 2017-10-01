/*
 * IDENTIFICATION:
 * stub generated Sun Oct  1 19:03:02 2017
 * with a MiG generated by bootstrap_cmds-96.20.2
 * OPTIONS: 
 *	KernelUser
 */
#define	__MIG_check__Reply__lockd_mach_subsystem__ 1

#include "lockd_mach.h"


#ifndef	mig_internal
#define	mig_internal	static __inline__
#endif	/* mig_internal */

#ifndef	mig_external
#define mig_external
#endif	/* mig_external */

#if	!defined(__MigTypeCheck) && defined(TypeCheck)
#define	__MigTypeCheck		TypeCheck	/* Legacy setting */
#endif	/* !defined(__MigTypeCheck) */

#if	!defined(__MigKernelSpecificCode) && defined(_MIG_KERNEL_SPECIFIC_CODE_)
#define	__MigKernelSpecificCode	_MIG_KERNEL_SPECIFIC_CODE_	/* Legacy setting */
#endif	/* !defined(__MigKernelSpecificCode) */

#ifndef	LimitCheck
#define	LimitCheck 0
#endif	/* LimitCheck */

#ifndef	min
#define	min(a,b)  ( ((a) < (b))? (a): (b) )
#endif	/* min */

#if !defined(_WALIGN_)
#define _WALIGN_(x) (((x) + 3) & ~3)
#endif /* !defined(_WALIGN_) */

#if !defined(_WALIGNSZ_)
#define _WALIGNSZ_(x) _WALIGN_(sizeof(x))
#endif /* !defined(_WALIGNSZ_) */

#ifndef	UseStaticTemplates
#define	UseStaticTemplates	0
#endif	/* UseStaticTemplates */

#ifndef	__MachMsgErrorWithTimeout
#define	__MachMsgErrorWithTimeout(_R_) { \
	switch (_R_) { \
	case MACH_SEND_INVALID_DATA: \
	case MACH_SEND_INVALID_DEST: \
	case MACH_SEND_INVALID_HEADER: \
		mig_put_reply_port(InP->Head.msgh_reply_port); \
		break; \
	case MACH_SEND_TIMED_OUT: \
	case MACH_RCV_TIMED_OUT: \
	default: \
		mig_dealloc_reply_port(InP->Head.msgh_reply_port); \
	} \
}
#endif	/* __MachMsgErrorWithTimeout */

#ifndef	__MachMsgErrorWithoutTimeout
#define	__MachMsgErrorWithoutTimeout(_R_) { \
	switch (_R_) { \
	case MACH_SEND_INVALID_DATA: \
	case MACH_SEND_INVALID_DEST: \
	case MACH_SEND_INVALID_HEADER: \
		mig_put_reply_port(InP->Head.msgh_reply_port); \
		break; \
	default: \
		mig_dealloc_reply_port(InP->Head.msgh_reply_port); \
	} \
}
#endif	/* __MachMsgErrorWithoutTimeout */

#ifndef	__DeclareSendRpc
#define	__DeclareSendRpc(_NUM_, _NAME_)
#endif	/* __DeclareSendRpc */

#ifndef	__BeforeSendRpc
#define	__BeforeSendRpc(_NUM_, _NAME_)
#endif	/* __BeforeSendRpc */

#ifndef	__AfterSendRpc
#define	__AfterSendRpc(_NUM_, _NAME_)
#endif	/* __AfterSendRpc */

#ifndef	__DeclareSendSimple
#define	__DeclareSendSimple(_NUM_, _NAME_)
#endif	/* __DeclareSendSimple */

#ifndef	__BeforeSendSimple
#define	__BeforeSendSimple(_NUM_, _NAME_)
#endif	/* __BeforeSendSimple */

#ifndef	__AfterSendSimple
#define	__AfterSendSimple(_NUM_, _NAME_)
#endif	/* __AfterSendSimple */

#define msgh_request_port	msgh_remote_port
#define msgh_reply_port		msgh_local_port



/* SimpleRoutine lockd_request */
mig_external kern_return_t lockd_request
(
	mach_port_t server,
	uint32_t vers,
	uint32_t flags,
	uint64_t xid,
	int64_t flk_start,
	int64_t flk_len,
	int32_t flk_pid,
	int32_t flk_type,
	int32_t flk_whence,
	sock_storage sock_address,
	xcred cred,
	uint32_t fh_len,
	nfs_handle fh
)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		uint32_t vers;
		uint32_t flags;
		uint64_t xid;
		int64_t flk_start;
		int64_t flk_len;
		int32_t flk_pid;
		int32_t flk_type;
		int32_t flk_whence;
		sock_storage sock_address;
		xcred cred;
		uint32_t fh_len;
		nfs_handle fh;
	} Request __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack()
#endif
	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	union {
		Request In;
	} Mess;

	Request *InP = &Mess.In;

	mach_msg_return_t msg_result;

#ifdef	__MIG_check__Reply__lockd_request_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__lockd_request_t__defined */

	__DeclareSendSimple(1023, "lockd_request")

	InP->NDR = NDR_record;

	InP->vers = vers;

	InP->flags = flags;

	InP->xid = xid;

	InP->flk_start = flk_start;

	InP->flk_len = flk_len;

	InP->flk_pid = flk_pid;

	InP->flk_type = flk_type;

	InP->flk_whence = flk_whence;

	{   typedef struct { char data[128]; } *sp;
	    * (sp) InP->sock_address = * (sp) sock_address;
	}

	{   typedef struct { char data[76]; } *sp;
	    * (sp) InP->cred = * (sp) cred;
	}

	InP->fh_len = fh_len;

	{   typedef struct { char data[64]; } *sp;
	    * (sp) InP->fh = * (sp) fh;
	}

	InP->Head.msgh_bits =
		MACH_MSGH_BITS(19, 0);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = server;
	InP->Head.msgh_reply_port = MACH_PORT_NULL;
	InP->Head.msgh_id = 1023;
	InP->Head.msgh_reserved = 0;

	__BeforeSendSimple(1023, "lockd_request")
#if	__MigKernelSpecificCode
	msg_result = mach_msg_send_from_kernel(&InP->Head, (mach_msg_size_t)sizeof(Request));
#else
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_MSG_OPTION_NONE, (mach_msg_size_t)sizeof(Request), 0, MACH_PORT_NULL, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
#endif /* __MigKernelSpecificCode */
	__AfterSendSimple(1023, "lockd_request")
	return msg_result;
}

#if ( __MigTypeCheck )
#if __MIG_check__Reply__lockd_mach_subsystem__
#if !defined(__MIG_check__Reply__lockd_ping_t__defined)
#define __MIG_check__Reply__lockd_ping_t__defined

mig_internal kern_return_t __MIG_check__Reply__lockd_ping_t(__Reply__lockd_ping_t *Out0P)
{

	typedef __Reply__lockd_ping_t __Reply __attribute__((unused));
	if (Out0P->Head.msgh_id != 1124) {
	    if (Out0P->Head.msgh_id == MACH_NOTIFY_SEND_ONCE)
		{ return MIG_SERVER_DIED; }
	    else
		{ return MIG_REPLY_MISMATCH; }
	}

#if	__MigTypeCheck
	if ((Out0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (Out0P->Head.msgh_size != (mach_msg_size_t)sizeof(__Reply)))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

	{
		return Out0P->RetCode;
	}
}
#endif /* !defined(__MIG_check__Reply__lockd_ping_t__defined) */
#endif /* __MIG_check__Reply__lockd_mach_subsystem__ */
#endif /* ( __MigTypeCheck ) */


/* Routine lockd_ping */
mig_external kern_return_t lockd_ping
(
	mach_port_t server
)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} Request __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		mach_msg_trailer_t trailer;
	} Reply __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
	} __Reply __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack()
#endif
	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	union {
		Request In;
		Reply Out;
	} Mess;

	Request *InP = &Mess.In;
	Reply *Out0P = &Mess.Out;

	mach_msg_return_t msg_result;

#ifdef	__MIG_check__Reply__lockd_ping_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__lockd_ping_t__defined */

	__DeclareSendRpc(1024, "lockd_ping")

	InP->Head.msgh_bits =
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = server;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 1024;
	InP->Head.msgh_reserved = 0;

	__BeforeSendRpc(1024, "lockd_ping")
#if	(__MigKernelSpecificCode) || (_MIG_KERNELSPECIFIC_CODE_)
	msg_result = mach_msg_rpc_from_kernel(&InP->Head, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply));
#else
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
#endif /* __MigKernelSpecificCode */
	__AfterSendRpc(1024, "lockd_ping")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__lockd_ping_t__defined)
	check_result = __MIG_check__Reply__lockd_ping_t((__Reply__lockd_ping_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__lockd_ping_t__defined) */

	return KERN_SUCCESS;
}

/* SimpleRoutine lockd_shutdown */
mig_external kern_return_t lockd_shutdown
(
	mach_port_t server
)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} Request __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack()
#endif
	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	union {
		Request In;
	} Mess;

	Request *InP = &Mess.In;

	mach_msg_return_t msg_result;

#ifdef	__MIG_check__Reply__lockd_shutdown_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__lockd_shutdown_t__defined */

	__DeclareSendSimple(1025, "lockd_shutdown")

	InP->Head.msgh_bits =
		MACH_MSGH_BITS(19, 0);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = server;
	InP->Head.msgh_reply_port = MACH_PORT_NULL;
	InP->Head.msgh_id = 1025;
	InP->Head.msgh_reserved = 0;

	__BeforeSendSimple(1025, "lockd_shutdown")
#if	__MigKernelSpecificCode
	msg_result = mach_msg_send_from_kernel(&InP->Head, (mach_msg_size_t)sizeof(Request));
#else
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_MSG_OPTION_NONE, (mach_msg_size_t)sizeof(Request), 0, MACH_PORT_NULL, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
#endif /* __MigKernelSpecificCode */
	__AfterSendSimple(1025, "lockd_shutdown")
	return msg_result;
}
