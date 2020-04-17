#include "shell.h"
/**
 * search_path - gets the path to execute commands
 * @environ: Environment variable
 * Return: token_path
 **/
char **search_path(char **environ)
{
	int position = 0;
	char **token_path;

	for (; environ[position] != NULL ; position++)
	{
		if (environ[position][0] == 'P' && environ[position][2] == 'T')
		{
			token_path = &(environ[position]);
		}
	}
	return (token_path);
}
