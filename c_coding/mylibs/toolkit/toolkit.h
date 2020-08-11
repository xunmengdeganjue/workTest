#ifndef __TOOLKIT_H__
#define __TOOLKIT_H__

#include <stdio.h>
#include <stdbool.h> /*for the bool type*/
#include <stddef.h>	/*for the size_t type*/
#include <string.h>
#include <stdlib.h>

bool do_cmd_and_get_result( char *cmd, char *out, size_t out_sz );


#endif
