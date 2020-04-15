#include "shell.h"
/**
 * _execev - Execute a program
 * @line: Input recieved from strtok
 * @argv: arguments
 * @num: inter var
 * @isatty_val: tty pd
 * @envi: enviroment var
 * Return: Nothing
 */
void _execev(char **line, char *argv, int num, int isatty_val, char **envi)
{
	pid_t pid;
	int _exec = 0;

	if (line[0] == NULL)
		return;

	if (is_buit_in(line, envi) != 1)
		return;

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
