#include "main.h"
/**
 *
 *
 *
 */
int execute_the_line(char * buuf[])
{
	int v = 0;
	char c[] = "/bin/";

	v = execve(buuf[0], buuf, NULL);
	if (v == -1)
	{
		printf("command doesn't exist\n");
		exit(98);
	}
	return (v);
}
