#include "main.h"
/**
 *execute_the_line - the function to use execve while executing the line
 *@buuf: the buffer with the whole command
 *Return: integer of the status
 */
int execute_the_line(char *buuf[])
{
	int v = 0;
	char c[] = "/bin/";
	char k = '/';
	char f = buuf[0][0];

	if (f == k)
	{
		execve(buuf[0], buuf, NULL);
	}
	else
	{
		strcat(c, buuf[0]);
		v = execve(c, buuf, NULL);
	}
	if (v == -1)
	{
		printf("command not found");
	}
	return (v);
}
