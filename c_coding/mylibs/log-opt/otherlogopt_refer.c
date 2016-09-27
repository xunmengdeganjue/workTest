

void Msg(char *fmt, ...)
{
	va_list ap;
	char	errmsg[LINELEN];

	va_start(ap, fmt);
	vsnprintf(errmsg, LINELEN-1, fmt, ap);
	va_end(ap);
	if (log2syslog > 0)
		syslog(LOG_ERR, "%s\n", errmsg);
	else
		fprintf(stderr, "%s\n", errmsg);
}



