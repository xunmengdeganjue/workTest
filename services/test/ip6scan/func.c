

#include "func.h"


char* xasprintf(const char *format, ...)
{
	va_list p;
	int r;
	char *string_ptr;
	va_start(p, format);
	r = vasprintf(&string_ptr, format, p);
	va_end(p);
	if (r < 0)
		exit(1);
	return string_ptr;
}

/* This function reads an entire line from a text file, up to a newline
 * or NUL byte, inclusive.  It returns a malloc'ed char * which
 * must be free'ed by the caller.  If end is NULL '\n' isn't considered
 * end of line.  If end isn't NULL, length of the chunk is stored in it.
 * If lineno is not NULL, *lineno is incremented for each line,
 * and also trailing '\' is recognized as line continuation.
 * Returns NULL if EOF/error. */
char* bb_get_chunk_with_continuation(FILE *file, int *end, int *lineno)
{
	int ch;//change the int to the char 20121216
	int idx = 0;
	char *linebuf = NULL;
	int linebufsz = 0;
	while ((ch = getc(file)) != EOF)
	{
		/* grow the line buffer as necessary */
		if (idx >= linebufsz) 
		{
			linebufsz += 256;
			linebuf = realloc(linebuf, linebufsz);
		}
		linebuf[idx++] = (char) ch;
		if (!ch)
			break;
		if (end && ch == '\n')
		{
			if (lineno == NULL)
				break;
			(*lineno)++;
			if (idx < 2 || linebuf[idx-2] != '\\')
				break;
			idx -= 2;
		}
	}
	if (end)
		*end = idx;
	if (linebuf) 
	{
		linebuf = realloc(linebuf, idx + 1);
		linebuf[idx] = '\0';
	}
	return linebuf;
}

/* Get line.  Remove trailing \n */
char* xmalloc_fgetline(FILE *file)
{
	int i;
	char *c = bb_get_chunk_with_continuation(file, &i,NULL);
	if (i && c[--i] == '\n')
		c[i] = '\0';
	return c;
}

int data_transmission()
{
	printf("mv the data from the /proc/ip6addr to /tmp/ip6addrs\n");
	struct flock lock;
	FILE *proc_fp;
	FILE *old_data_fp;
	FILE *new_data_fp;
	char *line = NULL;
	char *refer = NULL;
	int linenum = 0;
	char *fnamesfx;
	
	
	if((proc_fp = fopen(PROCIP6CLIENTS,"r"))==NULL){
		printf("open the proc file %s failed!\n",PROCIP6CLIENTS);
		return -1;
	}
	refer= xmalloc_fgetline(proc_fp);

	//sprintf();


	if((old_data_fp=fopen(IPV6CLIENTS,"w"))==NULL){
		printf("open the ip6clients record file %s failed!\n",IPV6CLIENTS);
		return -1;
	}

	
	while(1){
		line = xmalloc_fgetline(proc_fp);	
		if(!linenum && (line = NULL)){
			//fprintf();	
		}
		linenum ++;
	}
	
	
}

