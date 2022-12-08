#include "main.h"
/**
 *
 *
 *
 *
 */
extern char **environ;
int main(void)
{
	int i , k;
	size_t l = 0;
	char *readline;

	while (1)
	{
		printf("@root §");
		readline = get_the_line();
		i = fork();
		if (i == 0)
		{
			shell(readline);
		}
		else if (i < 0)
		{
			exit(127);
		}
		else
		{
			wait(&i);
		}
	}
	return(1);
}