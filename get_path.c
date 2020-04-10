#include "shell.h"

/**
 * get_patht - get the PATH in the environment
 * @env: enviroment var
 * Return: double ponter with each route in the path.
 */
char **get_path(char **env)
{
	char *str = "PATH";
	char *delimt = " \t\r\n\a :=";
	char *my_path;
	char **paths;
	unsigned int i = 0, j = 0;
	/* loop for find the PATH var, in the **env */
	while (env[i] != NULL)
	{
		my_path = _strstr(env[i], str);
		if (my_path != NULL)
		{
			//my_path_cpy = strdup(my_path);
			/* allocated memory only if found the path */
			
			paths = (char **)malloc(sizeof(char *) * 20);
			/* if fail copy path string or fail the malloc return NULL */
			if (paths == NULL)
				return (NULL);
			/* split all string and return pointer to each memory positions */
			strtok(my_path, delimt);
			while (my_path != NULL)
			{
				paths[j] = strdup(my_path);
				j++;
			/*	printf("%s\n", my_path);*/
				my_path = strtok(NULL, delimt);
			}
			paths[j] = NULL;
			return (paths);
			
		}
		i++;
	}
	return (NULL);
}
