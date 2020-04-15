#include "shell.h"
/**
 * execute_program - Execute a program
 * @token: Input recieved from strtok
 * Return: Nothing
 */
void _execev(char **line, char *argv, int num, int isatty_val, char **envi)
{
	pid_t pid;
	int _exec = 0;
	int val_buil = 0;

	if (line[0] == NULL)
		return;

	/**if (_strcmp(line[0], "exit") == 0)
	{
		free_dp(line);
		_exit(0);
	}*/

	val_buil = is_buit_in(line, envi);
	if (val_buil == 1)
	{
		return;
	}

	pid = fork();
	if (pid < 0)
	{
		printf("Error during fork\n");
		free_dp(line);
		exit(EXIT_FAILURE);
	}
	else if (pid != 0)
	{
		wait(NULL);
		return;
	}
	else
	{
		_exec = execve(line[0], line, NULL);
		if (_exec < 0)
		{
			if (isatty_val == 1)
			{
				printf("%s: No such file or directory\n", argv);
				free(line);
				exit(EXIT_SUCCESS);
			}
			printf("%s: %d: %s: not found\n", argv, num, line[0]);
			free(line);
			exit(EXIT_FAILURE);
		}
		free_dp(line);
		exit(EXIT_SUCCESS);
	}
}
