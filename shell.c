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
	int i;
	size_t l = 0;
	char *readline;

	while (1)
	{
		printf("@root §");
		getline(&readline, &l, stdin);
		if (strcmp(readline, "env\n") == 0)
		{
			char ** env = environ;

   			 while (*env != NULL)
    		{
    		    printf("%s\n", *env);
    		    env++;
    		}
		}
		if (strcmp(readline, "exit\n") == 0)
		{
			exit(98);
			break;
		}
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