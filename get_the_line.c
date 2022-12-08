#include "main.h"
/**
 * 
 * 
*/
extern char **environ;
char *get_the_line(void)
{
	int k;
	long unsigned int l = 0;
	char *userinput;

	k = getline(&userinput, &l, stdin);
	if (k == EOF)
	{
		free(userinput);
		exit(0);
	}
	if (strcmp(userinput, "env\n") == 0)
	{
		char **env = environ;

		while (*env)
		{
			printf("%s\n", *env);
			env++;
		}
		free(userinput);
		return (NULL);
	}
	if (strcmp(userinput, "exit\n") == 0)
	{
		free(userinput);
		exit(98);
	}
	if (userinput == NULL)
	{
		perror("A problem while mallocing the buffer");
	}
	return (userinput);
}
