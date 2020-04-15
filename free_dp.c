#include "shell.h"

void free_dp(char **line)
{
	int x;

	for (x = 0; line[x]; x++)
	{
		free(line[x]);
		line[x] = NULL;
	}
	free(line);
	line = NULL;
}
