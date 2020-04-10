#include "shell.h"
#define BUF_SIZE 10

/**
 * _strtok - split to string given
 * @argv: strint to toking
 * Return: new array of pointer to ponter to string
 */

char **_strtok(char *argv)
{
	char **words = NULL;
	char *word_line = argv;
	int i = 0;


	if (*argv == '\0')
		return (NULL);
	words = (char **)malloc(BUF_SIZE * sizeof(char *));
	if (words == NULL)
		return (NULL);
	word_line = strtok(argv, DELIMIT);
	while (word_line != NULL)
	{
		words[i] = _strdup(word_line);
		if (words[i] == NULL)
			return (free_dp(words));

		i++;
		/* REALLOC PUT HERE */
		word_line = strtok(NULL, DELIMIT);
	}
	words[i] = NULL;
	return (words);
}

