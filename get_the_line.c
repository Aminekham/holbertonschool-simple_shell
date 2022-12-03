#include "main.h"
char *get_the_line(void)
{
	long unsigned int l = 0;
	char *userinput = NULL;

	getline(&userinput, &l, stdin);
	if (userinput == NULL)
	{
		perror("A problem while mallocing the buffer");
	}
	return (userinput);
}
