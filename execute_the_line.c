#include "main.h"
/**
 *execute_the_line -executes the Line.
 *@buuf:Buffer
 *Return: int
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
	strcat(c, buuf[0]);
	v = execve(c, buuf, NULL);
	if (v == -1)
	{
		return (v);
	}
	return (v);
}
