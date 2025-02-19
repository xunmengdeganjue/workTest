#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "dbg_print_struct.h"

int dbg_print_struct(char *name, int argc, char **argv)
{
    print_struct_t *p = NULL;

    for(p = &__TY_DEFINE_CMD_ST_start; p < &__TY_DEFINE_CMD_ST_end; p++)
    {
        if(!strcmp(p->name, name))
        {
            p->cmd(--argc, ++argv);
            return 0;
        }
    }

    printf("not found this name: %s\n", name);
    return 0;
}

void help(void)
{
    print_struct_t *p = NULL;

    printf("Usage: tyShow <name> [args...]\n");
    printf("support name:\n");
    for(p = &__TY_DEFINE_CMD_ST_start; p < &__TY_DEFINE_CMD_ST_end; p++)
    {
        printf("%s ", p->name);
        if(p->help && strlen(p->help) > 0)
        {
            printf("%s", p->help);
        }
        printf("\n");
    }
}

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        help();
        return 0;
    }

    if(!strcmp(argv[1], "-h") || !strcmp(argv[1], "--help") || !strcmp(argv[1], "help"))
    {
        help();
        return 0;
    }

    dbg_print_struct(argv[1], --argc, &argv[1]);
    return 0;
}
