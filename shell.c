#include "main.h"
/**
 *main - the main function for shell
 *Return: the integer of the status
 */
int main(void)
{
	int i, k;
	size_t l = 0;
	char *readline = NULL;

	while (1)
	{
		k = getline(&readline, &l, stdin);
		signal(SIGINT, sigintHandler);
		if (k == EOF)
		{
			free(readline);
			exit(0);
		}
		if (strcmp(readline, "exit\n") == 0)
		{
			exit(0);
			free(readline);
			break;
		}
		i = fork();
		if (i == 0)
		{
			shell(readline);
			free(readline);
		}
		else if (i < 0)
			exit(98);
		else
			wait(&i);
	}
}
