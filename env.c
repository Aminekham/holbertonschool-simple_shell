#include "main.h"
/**
 *env - the env function
 *Return: 1
 */
extern char **environ;
int env(void)
{
	char **env;
	env = environ;
	while (*env)
	{
		printf("%s\n", *env);
		env++;
	}
	return (1);
}
