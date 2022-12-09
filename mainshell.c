#include "main.h"
/**
 * shell - the core of the shell
 * @readline: the command ready for parsing and excution
 * Return: the value returned from the excution
 */

int shell(char *readline)
{
	int f;
	char **command = malloc(sizeof(char *) * 1024);

	/**wait for user to enter commands */
	command = parse_the_line(readline);
	f = execute_the_line(command);
	return (f);
}
