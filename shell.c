#include "main.h"
/**
 *
 *
 *
 *
 */
int main(void)
{
	int i;
	char *readline;
	while (1)
	{
		readline = get_the_line();
		i = fork();
		if (i == 0)
		{
			shell(readline);
		}
		else if (i < 0)
		{
			exit(98);
		}
		else
		{
			wait(&i);
		}
	}
}
