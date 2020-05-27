#include<stdio.h>
#include"macro.h"

extern hi_int32 hi_ipc_call(hi_char8 *pc_call_name, hi_void  *pv_data,hi_uint32 ui_size);

#define HI_IPC_CALL3(ipc_fun, data, size) hi_ipc_call("hi_"ipc_fun"_call", data, size)
#define HI_IPC_CALL2(ipc_fun, data, size) hi_ipc_call("hi_"ipc_fun"_call", data, sizeof(*data))
#define HI_IPC_CALL1(ipc_fun, data, size) hi_ipc_call("hi_"ipc_fun"_call", NULL, 0)

/* Get the number of parameters of the variable-length parameter macro, support 0-10 variable-length parameters */
#define HI_VA_NARGS_IMPL(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, N, ...) N
#define HI_VA_NARGS(...) HI_VA_NARGS_IMPL(_, ##__VA_ARGS__, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0)
#define HI_IPC_CALL_IMPL2(count, ...) HI_IPC_CALL##count( __VA_ARGS__ )
#define HI_IPC_CALL_IMPL(count, ...)  HI_IPC_CALL_IMPL2(count, __VA_ARGS__ )
#define HI_IPC_CALL(...)              HI_IPC_CALL_IMPL(HI_VA_NARGS(__VA_ARGS__), __VA_ARGS__ )


int main(char argc,char **argv){

	
	HI_IPC_CALL("IPC_igdCmConfSet", "hello", 10);
	HI_IPC_CALL("IPC_igdCmConfSet", "hello",0);
	HI_IPC_CALL("IPC_igdCmConfSet",NULL,0);

}
