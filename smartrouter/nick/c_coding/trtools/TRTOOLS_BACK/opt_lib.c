/*



**/

#include "opt_lib.h"


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

/*
 * Find out if the last character of a string matches the one given.
 * Don't underrun the buffer if the string length is 0.
 */
char*  last_char_is(const char *s, int c)
{
	if (s && *s) 
	{
		size_t sz = strlen(s) - 1;
		s += sz;
		if ( (unsigned char)*s == c)
			return (char*)s;
	}
	return NULL;
}
char* xstrdup(const char *s)
{
	char *t;
	if (s == NULL)
		return NULL;
	t = strdup(s);
	if (t == NULL)		
		//bb_error_msg_and_die(bb_msg_memory_exhausted);
		return NULL;
	return t;
}

