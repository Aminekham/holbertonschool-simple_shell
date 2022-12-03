#include "main.h"
/**
 *
 *
 *
 */
int execute_the_line(char * buuf[])
{
	int v = 0, i;
	char c[] = "/bin/";

	printf("the value of v = %d", v);
	strcat(c, buuf[0]);
	v = execve(c, buuf, NULL);
	if (v == -1)
	{
		printf("no its here");
	}
	return (v);
}