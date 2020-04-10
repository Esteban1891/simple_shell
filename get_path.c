#include "shell.h"

/**
 * count_chr - count how many chr  delimitn have *srt
 * @str: string
 * @chr: char to find in str
 * Return - int number
 */

int count_chr(char *str, char *delimits)
{
	int result = 0, i, j;

	if (str != NULL && delimits != NULL)
	{
		for (i = 0; delimits[i] != '\0'; i++)
			for(j = 0; str[j] != '\0'; j++)
				if (delimits[i] == str[j])
					result++;
	}
	return (result);
}

/**
 * get_patht - get the PATH in the environment
 * @env: enviroment var
 * Return: double ponter with each route in the path.
 */
char **get_path(char **env)
{
	char *str = "PATH";
	char *my_path;
	char **paths;
	unsigned int i = 0, j = 0;
	/* loop for find the PATH var, in the **env */
	while (env[i] != NULL)
	{
		my_path = _strstr(env[i], str);
		if (my_path != NULL)
		{
			paths = (char **)malloc(sizeof(char *) * count_chr(my_path, PATH_DELIMIT) + 1);
			/* if fail copy path string or fail the malloc return NULL */
			if (paths == NULL)
				return (NULL);
			/* split all string and return pointer to each memory positions */
			strtok(my_path, PATH_DELIMIT);
			while (my_path != NULL)
			{
				/* make a copy in new memory allocation for each string */
				paths[j] = strdup(my_path);
				/* validate if copy is done else return NULL */
				if (paths[j] == NULL)
					return (free_dp(paths));

				j++;
				my_path = strtok(NULL, PATH_DELIMIT);
			}
			paths[j] = NULL;
			return (paths);
			
		}
		i++;
	}
	return (NULL);
}
