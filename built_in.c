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

	if (_strcmp(line[0], "env") == 0)
		return (printenv(environ));

	return (EXIT_SUCCESS);
}


/**
 * printenv - prints the environment of a process
 * @environ: double pointer
 *
 * Return: void
 */
int printenv(char **environ)
{
	unsigned int i, j;

printf("**********");
	i = 0;
	while (environ[i] != NULL)
	{
		j = 0;
		while (environ[i][j] != '\0')
		{
			_putchar(environ[i][j]);
			j++;
		}
		_putchar('\n');
		i++;
printf("**********");
	}
	return (0);
}

