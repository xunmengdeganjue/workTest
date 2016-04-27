/*



**/
#ifndef __OPT_LIB_H__
#define __OPT_LIB_H__

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdarg.h>


char* bb_get_chunk_with_continuation(FILE *file, int *end, int *lineno);
char* xmalloc_fgetline(FILE *file);
char* xasprintf(const char *format, ...);
char* last_char_is(const char *s, int c);
char* xstrdup(const char *s);

#endif

