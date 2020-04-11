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
		printf("\n");
		free(line);
		exit(EXIT_SUCCESS);
	}
	
	if (strcmp(line,"exit\n") == 0)
	{
		free(line);
		exit(EXIT_SUCCESS);
	}

	if (strcmp(line,"\n") == 0)
	{
		free(line);
		return(NULL);
		//CLEAR_SCREEN;
	}
	if (strcmp(line,"k\n") == 0)
	{
		free(line);
		CLEAR_SCREEN;
		return(NULL);
	}
	return (line);
}

