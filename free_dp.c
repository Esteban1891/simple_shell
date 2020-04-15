#include "shell.h"
/**
 * free_dp - free to file
 * @line: double pointer to free
 *
 * Return: ptr null
 */

void free_dp(char **line)
{
	int x;

	for (x = 0; line[x]; x++)
	{
		free(line[x]);
		line[x] = NULL;
	}
	free(line);
	line = NULL;
}
