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
	char *env[] = {
        "HOME=/",
        "PATH=/bin:/usr/bin",
        "TZ=UTC0",
        "USER=beelzebub",
        "LOGNAME=tarzan",
        0
    };

	printf("the value of v = %d", v);
	strcat(c, buuf[0]);
	v = execve(c, buuf, env);
	if (v == -1)
	{
		printf("no its here");
	}
	return (v);
}