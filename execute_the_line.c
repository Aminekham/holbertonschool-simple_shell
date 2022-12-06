#include "main.h"
/**
 *
 *
 *
 */
int execute_the_line(char * buuf[])
{
	int v = 0, l, i;
	char c[] = "/bin/";
	char *env[] = {
        "HOME=/desktop",
        "PATH=/bin:/usr/bin",
        "TZ=UTC0",
        "USER=root",
        "LOGNAME=root",
        0
    };
	char *b = "/";
	
	if (*buuf[0] != *b)
	{
		strcat(c, buuf[0]);
		v = execve(c, buuf, env);
	}
	else
	{
		v = execve(buuf[0], buuf, env);
	}
	if (v == -1)
	{
		printf("command doesn't exist\n");
		exit(98);
	}
	return (v);
}