#include "shell.h"

/**
 * _statusev - executa a external funtion
 * @argvs: arguments
 * Return: double pointer to string
 */
int _execev(char **argvs)
{
	pid_t pid;
	int status;
/*	char *path = "/bin/ls";*/


	pid = fork();
	if (pid < 0)
	{
		printf("Error during fork\n");
		exit(-1);
	}
	else if (pid != 0)
	{
		wait(NULL);
		return (0);
	}
	else
	{
		status = execve(argvs[0], argvs, NULL);
		if (status < 0)
		{
			free_dp(argvs);
			perror("Error");
			exit(-1);
		}
	}
	return (0);
}
