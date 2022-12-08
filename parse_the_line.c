#include "main.h"
/**
 *parse_the_line - the function to parse the line
 *@buff: the buffer to get parsed
 *Return: the whole command
 */
char **parse_the_line(char *buff)
{
	int i = 0;
	char **whole_line;
	char *word;

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
