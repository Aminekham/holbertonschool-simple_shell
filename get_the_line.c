#include "main.h"
/**
 * 
 * 
*/
char *get_the_line(void)
{
	int k;
	long unsigned int l = 0;
	char *userinput;

	k = getline(&userinput, &l, stdin);
	if (userinput == NULL)
	{
		perror("A problem while mallocing the buffer");
	}
	else if (k == EOF)
	{
		free(userinput);
		exit(0);
	}
	else if (strcmp(userinput, "exit\n") == 0)
	{
		free(userinput);
		exit(0);
	}
	return (userinput);
}
