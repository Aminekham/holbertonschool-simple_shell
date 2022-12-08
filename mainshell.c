#include "main.h"
/**
 * shell- mallocs and calls functions.
 * @readline:the user iput.
 * Return:int.
 */

int shell(char *readline)
{
	char **command = malloc(sizeof(char *) * 1024);

	/**wait for user to enter commands */
	command = parse_the_line(readline);
	execute_the_line(command);
	return (1);
}
