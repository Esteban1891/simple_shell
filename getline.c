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
	read = getline(&line, &len, stdin);
	if (line == NULL)
	{
		perror("Error allocated memory");
		return (NULL);
	}
	/* if user type C-d */
	if (read == EOF)
	{
		free(line);
		exit(1);
	}
	return (line);
}

