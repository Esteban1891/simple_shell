#include "shell.h"
/**
 * is_buit_in - command environment
 * @line: wherever
 * @environ: add envi
 * Return: if pointers is success.
 */
int is_buit_in(char **line, char **environ)
{
	int chdir_val = 0;

	if (_strcmp(line[0], "exit") == 0 && !line[1])
	{
		free_dp(line);
		_exit_function();
	}

	if (_strcmp(line[0], "cd") == 0)
	{
		if (!line[1])
		{
			chdir_val = chdir("..");
			if (chdir_val != 0)
			{
				printf("Error changing directory\n");
				return (1);
			}
			return (1);
		}

		chdir_val = chdir(line[1]);

		if (chdir_val != 0)
		{
			printf("Error changing directory to: %s\n", line[1]);
			return (1);
		}
		return (1);
	}

if ((_strcmp(line[0], "env") == 0) && line[1] == NULL)
		func_printenv(environ);      /*Encuentra el enviroment*/

	return (EXIT_SUCCESS);
}

/**
 * func_printenv - prints the current environment
 * @environ: environment variable
 */
void func_printenv(char **environ)
{
	int i = 0;

	for (; environ[i] ; i++)

		_puts(environ[i]); /*imprime todo el environment*/
}
