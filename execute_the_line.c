#include "main.h"
/**
 *execute_the_line - the function to use execve while executing the line
 *@buuf: the buffer with the whole command
 *Return: integer of the status
 */
int execute_the_line(char * buuf[])
{
	int v = 0;
	char c[] = "/bin/";

	strcat(c, buuf[0]);
	v = execve(c, buuf, NULL);
	if (v == -1)
	{
		while (*buuf != NULL)
		{
			free(*buuf);
			buuf++;
		}
		printf("command doesn't exist\n");
		exit(98);
	}
	return (v);
}
