#include "main.h"
/**
 * first_step
 * Return:void.
 */

void main_shell(void)
{
    int status = 1;
    char *readline;
    char **parsed;
    int executed;
    while (status)
    {
        printf("$");
        /**wait for user to enter commands */
        readline = get_the_line();
        parsed = parse_the_line();
        executed = execute_the_line();
        if (executed != status)
        {
            break;
        }
    }
}