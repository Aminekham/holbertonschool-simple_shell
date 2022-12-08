#include "main.h"
/**
 *get_the_line - the function to get the line and test on it
 *Return: the whole command ready to parse
 */
char *get_the_line(void)
{
	ssize_t k = 0;
	long unsigned int l = 0;
	char *userinput;

	k = getline(&userinput, &l, stdin);
	if (userinput == NULL)
	{
		free(userinput);
		perror("A problem while mallocing the buffer");
	}
	if (k == EOF)
	{
		free(userinput);
		exit(0);
	}
	if (strcmp(userinput, "exit\n") == 0)
	{
		free(userinput);
		exit(0);
	}
	return (userinput);
}
