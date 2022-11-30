#include "main.h"
/**
 * first_step
 * Return:void.
 */

int main(void)
{
    int status = 1;
    size_t l = 0;
    char *readline;
    char **command = malloc(sizeof(char*) * 1024);
    int executed;

    printf("$");
    while (status)
    {
        /**wait for user to enter commands */
        getline(&readline, &l, stdin);
        command = parse_the_line(readline);
        executed = execute_the_line(command);
          if (executed != status)
        {
            break;
        }
        free(readline);
	    printf("$");
    }
    return(1);
}
