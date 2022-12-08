#include "main.h"
/**
 *
 *
 *
 *
 */
int main(void)
{
	int i = 0, k = 0, f = 0;
	size_t l = 0;
	char *readline = NULL;
	while (1)
	{
		k = getline(&readline, &l, stdin);
		if (k == EOF)
		{
			free(readline);
			exit(0);
		}
		if (strcmp(readline, "exit\n") == 0)
		{
			free(readline);
			exit(0);
			break;
		}
		if (strcmp(readline, "env\n") == 0)
		{
			env();
		}
		i = fork();
		if (i == 0)
		{
			f = shell(readline);
			if (f == -1)
				break;
			free(readline);
		}
		else if (i < 0)
			exit(98);
		else
			wait(&i);
	}
	return(1);
}