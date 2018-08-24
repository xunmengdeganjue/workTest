 /**
	@file log_for_debug.h
**/ 

#ifndef __LOG_OPT_H__
#define __LOG_OPT_H__


/* Include files. */

/* Macro constant definitions. */
#define LOG_FILE				"/var/log/iwevent.log"


/** default iwevent log debug level */
#define LOG_LEVEL							eLOG_LEVEL_TRACE
#define LOG_DEBUG_DEFAULT_LEVEL			eLOG_LEVEL_ERROR
#define LOG_DEBUG_DEFAULT_BUF_LEN		128
#define LOG_DEBUG_FILE_SIZE				(1024 * 1024) /*1M*/

/* Type definitions. */

enum e_log_level{
	eLOG_LEVEL_CRITICAL = 1,
	eLOG_LEVEL_ERROR,
	eLOG_LEVEL_WARNING,
	eLOG_LEVEL_INFOR ,
	eLOG_LEVEL_DEBUG ,
	eLOG_LEVEL_TRACE ,
};

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

#define log_crit(fmt,...) \
		do { \
			debug_log_print(logopt_log, eLOG_LEVEL_CRITICAL, __FUNCTION__, \
				__FILE__, __LINE__, (fmt), ##__VA_ARGS__); \
		} while(0)

#define log_err(fmt,...) \
	do { \
		debug_log_print(logopt_log, eLOG_LEVEL_ERROR, __FUNCTION__, \
			__FILE__, __LINE__, (fmt), ##__VA_ARGS__); \
	} while(0)

#define log_info(fmt,...) \
	do { \
		debug_log_print(logopt_log, eLOG_LEVEL_INFOR, __FUNCTION__, \
			__FILE__, __LINE__, (fmt), ##__VA_ARGS__); \
	} while(0)

#define log_dbg(fmt,...) \
	do { \
		debug_log_print(logopt_log, eLOG_LEVEL_DEBUG, __FUNCTION__, \
			__FILE__, __LINE__, (fmt), ##__VA_ARGS__); \
	} while(0)

#define log_trace_enter() \
	do { \
		debug_log_print(logopt_log, eLOG_LEVEL_TRACE, __FUNCTION__, \
			__FILE__, __LINE__, "[ENTER]\n"); \
	} while(0)

#define log_trace_exit() \
	do { \
		debug_log_print(logopt_log, eLOG_LEVEL_TRACE, __FUNCTION__, \
			__FILE__, __LINE__, "[EXIT]\n"); \
	} while(0)

#define log_trace_line() \
	do { \
		debug_log_print(logopt_log, eLOG_LEVEL_TRACE, __FUNCTION__, \
			__FILE__, __LINE__, "[CHECK]\n"); \
	} while(0)

#define log_dbg_init() \
	debug_log_init(&logopt_log, LOG_FILE, 0, LOG_LEVEL)
	
/* Global variable declarations. */

#endif				/* __LOG_OPT_H__ */