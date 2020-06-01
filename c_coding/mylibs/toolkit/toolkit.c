#include "toolkit.h"

bool do_cmd_and_get_result( char *cmd, char *out, size_t out_sz )
{
    FILE *fcmd = NULL;
    bool retval = false;

    if ( NULL == cmd  || 1 > strlen( cmd ) || NULL == out || 0 >= out_sz )
    {
        goto error;
    }

    fcmd = popen( cmd, "r" );
    if ( NULL == fcmd )
    {
        goto error;
    }

    if ( fgets( out, out_sz + 1, fcmd ) == NULL )
    {
        goto error;
    }

    /* Trim new lines */
    size_t sz = strlen( out );
    do
    {
        if ( NULL == strchr( "\r\n", out[sz] ) )
        {
            break;
        }

        out[sz--] = '\0';
    }while ( sz > 0 );

    retval = true;
error:
    if ( NULL != fcmd )
    {
        pclose( fcmd );
    }

    return retval;
}
