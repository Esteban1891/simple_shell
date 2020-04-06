#include "shell.h"

/**
 * _getlines - get info the CLI
 * Return: pointer to string inf typed for user
 */

char *_getlines(void)
{
	char *line = NULL;
	size_t len = 0;
	ssize_t read = 0;

	/* EOF is defined in stdio.h (and is usually -1). */
	printf(">");
	read = getline(&line, &len, stdin);

	if (read == EOF)
		return (NULL);

	return (line);
}

