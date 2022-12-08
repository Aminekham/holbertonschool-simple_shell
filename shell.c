#include "main.h"
/**
 *
 *
 *
 *
 */
int main(void)
{
	int i, k;
	size_t l = 0;
	char *readline;
	while (1)
	{
		k = getline(&readline, &l, stdin);
		if (k == EOF)
		{
			exit(127);
		}
		if (strcmp(readline, "exit\n") == 0)
		{
			exit(98);
			free(readline);
			break;
		}
		if (strcmp(readline, "env\n") == 0)
		{
			env();
		}
		i = fork();
		if (i == 0)
			shell(readline);
		else if (i < 0)
			exit(98);
		else
			wait(&i);
	}
}