#include "main.h"
/**
 *execute_the_line -executes the Line.
 *@buuf:Buffer
 *Return: int
 */
int execute_the_line(char *buuf[])
{
	int v = 0;

	v = execve(buuf[0], buuf, NULL);
	if (v == -1)
	{
		return (v);
	}
	return (v);
}
