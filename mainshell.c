#include "main.h"
/**
 * first_step
 * Return:void.
 */

int shell(char *readline)
{
    char **command = malloc(sizeof(char*) * 1024);
    int i = 0;

    /**wait for user to enter commands */
    command = parse_the_line(readline);
    execute_the_line(command);
    return(1);
}
