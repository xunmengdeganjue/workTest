/**
	Copyright(C) 2014 Skysoft Info&Tech Co.,Ltd. All right reserved.
	@file code_spec_test.h
	@brief Log debug header file.
	@author Mike Liu (mike.liu@cdskysoft.com)
	@version 1.0
	@date 2014-12-19(Create) 2014-12-19(Update)
	@todo Something in plan.
	@details detail description of this file.
**/ 

#ifndef __LOG_FOR_DEBUG_H__
#define __LOG_FOR_DEBUG_H__

#ifdef __cplusplus
extern "C" {
#endif				/* __cplusplus */

/* Include files. */

/* Macro constant definitions. */
//#define SKY_LOG_FILE				"/tmp/sky_log.log"
#define SKY_LOG_FILE				"/dev/console"

/** default cgi log debug level */
#define SKY_LOG_LEVEL					eLOG_LEVEL_TRACE

#define LOG_DEBUG_DEFAULT_LEVEL		eLOG_LEVEL_ERROR
#define LOG_DEBUG_DEFAULT_BUF_LEN		128
#define LOG_DEBUG_FILE_SIZE				(512 * 1024)

/* Type definitions. */

	enum {
		eLOG_LEVEL_CRITICAL = 0,
		eLOG_LEVEL_ERROR = 1,
		eLOG_LEVEL_WARNING = 2,
		eLOG_LEVEL_INFOR = 3,
		eLOG_LEVEL_DEBUG = 4,
		eLOG_LEVEL_TRACE = 5,
	} e_log_level;

	typedef struct debug_log *t_log_p;

/* External function declarations. */

extern int debug_log_init(t_log_p * log_p, const char *log_file, unsigned long attr, int init_level);
extern int debug_log_print(t_log_p log, int level, const char *func,
			   const char *file, unsigned long line, const char *fmt, ...);
extern void debug_log_clean(t_log_p * log_p);

/* Macro API definitions. */
/** tr_notifyd opt log pointer */
t_log_p sky_log;

/* Macro API definitions. */

#define sky_crit(fmt,...) \
		do { \
			debug_log_print(sky_log, eLOG_LEVEL_CRITICAL, __FUNCTION__, \
				__FILE__, __LINE__, (fmt), ##__VA_ARGS__); \
		} while(0)

#define sky_err(fmt,...) \
	do { \
		debug_log_print(sky_log, eLOG_LEVEL_ERROR, __FUNCTION__, \
			__FILE__, __LINE__, (fmt), ##__VA_ARGS__); \
	} while(0)

#define sky_info(fmt,...) \
	do { \
		debug_log_print(sky_log, eLOG_LEVEL_INFOR, __FUNCTION__, \
			__FILE__, __LINE__, (fmt), ##__VA_ARGS__); \
	} while(0)

#define sky_dbg(fmt,...) \
	do { \
		debug_log_print(sky_log, eLOG_LEVEL_DEBUG, __FUNCTION__, \
			__FILE__, __LINE__, (fmt), ##__VA_ARGS__); \
	} while(0)

#define sky_trace_enter() \
	do { \
		debug_log_print(sky_log, eLOG_LEVEL_TRACE, __FUNCTION__, \
			__FILE__, __LINE__, "[ENTER]\n"); \
	} while(0)

#define sky_trace_exit() \
	do { \
		debug_log_print(sky_log, eLOG_LEVEL_TRACE, __FUNCTION__, \
			__FILE__, __LINE__, "[EXIT]\n"); \
	} while(0)

#define sky_trace_line() \
	do { \
		debug_log_print(sky_log, eLOG_LEVEL_TRACE, __FUNCTION__, \
			__FILE__, __LINE__, "[CHECK]\n"); \
	} while(0)

#define sky_log_init() \
	debug_log_init(&sky_log, SKY_LOG_FILE, 0, SKY_LOG_LEVEL)
	
/* Global variable declarations. */

#ifdef __cplusplus
}				/* extern "C" */
#endif				/* __cplusplus */
#endif				/* __LOG_FOR_DEBUG_H__ */
