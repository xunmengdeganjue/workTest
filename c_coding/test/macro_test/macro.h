#include<stdio.h>


/*********************************************************/
#ifndef hi_void
#define   hi_void              void
#endif

#ifndef hi_char8
#define   hi_char8             char
#endif

#ifndef hi_short16
#define   hi_short16           short
#endif

#ifndef hi_int32
#define   hi_int32             int
#endif

#ifndef hi_long64
#define   hi_long64            long long
#endif

#ifndef hi_double64
#define hi_double64            double
#endif

/*********************************************************/

#ifndef hi_uchar8
#define   hi_uchar8            unsigned char
#endif

#ifndef hi_ushort16
#define   hi_ushort16          unsigned short
#endif
#ifndef hi_uint32
#define   hi_uint32            unsigned int
#endif

#ifndef hi_ulong32
#define   hi_ulong32           unsigned long
#endif

#ifndef hi_ulong64
#define   hi_ulong64           unsigned long long
#endif

/*********************************************************/

#ifndef hi_handle
#define   hi_handle            unsigned int
#endif


/*********************************************************/


extern hi_int32 hi_ipc_call(hi_char8 *pc_call_name, hi_void  *pv_data,hi_uint32 ui_size);
#define HI_IPC_CALL3(ipc_fun, data, size) hi_ipc_call("hi_"ipc_fun"_call", data, size)
/* 获取变长参数宏的参数个数,支持0-10个变长参�*/
#define HI_VA_NARGS_IMPL(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, N, ...) N
#define HI_VA_NARGS(...) HI_VA_NARGS_IMPL(_, ##__VA_ARGS__, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0)

#define HI_IPC_CALL_IMPL2(count, ...) HI_IPC_CALL##count( __VA_ARGS__ )
#define HI_IPC_CALL_IMPL(count, ...)  HI_IPC_CALL_IMPL2(count, __VA_ARGS__ )
#define HI_IPC_CALL(...)              HI_IPC_CALL_IMPL(HI_VA_NARGS(__VA_ARGS__), __VA_ARGS__ )
