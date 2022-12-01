#include "main.h"
/**
 * first_step
 * Return:void.
 */

int main(void)
{
    size_t l = 0;
    char *readline;
    char **command = malloc(sizeof(char*) * 1024);
    int executed;

    printf("$");
    while (1)
    {
        /**wait for user to enter commands */
        getline(&readline, &l, stdin);
        command = parse_the_line(readline);
        executed = execute_the_line(command);
	    printf("$");
    }
    return(1);
}
