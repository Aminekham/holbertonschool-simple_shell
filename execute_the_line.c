#include "main.h"
/**
 *execute_the_line - function to excute the line
 *@buuf: the whole command parsed
 *Return: returns an int value
 */
int execute_the_line(char *buuf[])
{
	int v = 0;
	char c[] = "/bin/";
	char k = '/';
	char f = buuf[0][0];

	if (f == k)
	{
		v = execve(buuf[0], buuf, NULL);
		if (v == -1)
		{
			while (*buuf)
			{
				free(*buuf);
				buuf++;
			}
			free(buuf);
			return (v);
		}
	}
	strcat(c, buuf[0]);
	v = execve(c, buuf, NULL);
	if (v == -1)
	{while (*buuf)
		{free(*buuf);
			buuf++;
		}
		return (v);
		free(buuf);
	}
	return (v);
}
