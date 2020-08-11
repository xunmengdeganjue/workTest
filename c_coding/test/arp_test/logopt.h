 /**
	@file log_for_debug.h
**/ 

#ifndef __LOG_FOR_DEBUG_H__
#define __LOG_FOR_DEBUG_H__

#ifdef __cplusplus
extern "C" {
#endif				/* __cplusplus */

/* Include files. */

/* Macro constant definitions. */
#define REAGENT_LOG_FILE				"/tmp/arp_test.log"

/** default cgi log debug level */
#define CGI_LOG_LEVEL					eLOG_LEVEL_TRACE

#define LOG_DEBUG_DEFAULT_LEVEL		 	eLOG_LEVEL_ERROR
#define LOG_DEBUG_DEFAULT_BUF_LEN		128
#define LOG_DEBUG_FILE_SIZE				(1024 * 1024)

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
/** opt log pointer */
t_log_p logopt_log;

/* Macro API definitions. */

#define logopt_crit(fmt,...) \
		do { \
			debug_log_print(logopt_log, eLOG_LEVEL_CRITICAL, __FUNCTION__, \
				__FILE__, __LINE__, (fmt), ##__VA_ARGS__); \
		} while(0)

#define logopt_err(fmt,...) \
	do { \
		debug_log_print(logopt_log, eLOG_LEVEL_ERROR, __FUNCTION__, \
			__FILE__, __LINE__, (fmt), ##__VA_ARGS__); \
	} while(0)

#define logopt_info(fmt,...) \
	do { \
		debug_log_print(logopt_log, eLOG_LEVEL_INFOR, __FUNCTION__, \
			__FILE__, __LINE__, (fmt), ##__VA_ARGS__); \
	} while(0)

#define logopt_dbg(fmt,...) \
	do { \
		debug_log_print(logopt_log, eLOG_LEVEL_DEBUG, __FUNCTION__, \
			__FILE__, __LINE__, (fmt), ##__VA_ARGS__); \
	} while(0)

#define logopt_trace_enter() \
	do { \
		debug_log_print(logopt_log, eLOG_LEVEL_TRACE, __FUNCTION__, \
			__FILE__, __LINE__, "[ENTER]\n"); \
	} while(0)

#define logopt_trace_exit() \
	do { \
		debug_log_print(logopt_log, eLOG_LEVEL_TRACE, __FUNCTION__, \
			__FILE__, __LINE__, "[EXIT]\n"); \
	} while(0)

#define logopt_trace_line() \
	do { \
		debug_log_print(logopt_log, eLOG_LEVEL_TRACE, __FUNCTION__, \
			__FILE__, __LINE__, "[CHECK]\n"); \
	} while(0)

#define logopt_log_init() \
	debug_log_init(&logopt_log, REAGENT_LOG_FILE, 0, CGI_LOG_LEVEL)
	
/* Global variable declarations. */

#ifdef __cplusplus
}				/* extern "C" */
#endif				/* __cplusplus */
#endif				/* __LOG_FOR_DEBUG_H__ */