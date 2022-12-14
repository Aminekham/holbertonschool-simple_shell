#include "main.h"
/**
 *parse_the_line-parses the line.
 * @buff:Buffer
 * Return: vector.
 */
char **parse_the_line(char *buff)
{
	int i = 0;
	char **whole_line = NULL;
	char *word = NULL;

	whole_line = malloc(1024);
	word = strtok(buff, " \n\t");
	whole_line[i] = word;
	while (word)
	{
		i++;
		word = strtok(NULL, " \n\t");
		whole_line[i] = word;
	}

	return (whole_line);
}
