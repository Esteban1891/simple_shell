#include "shell.h"

/**
 * main - prints the environment
 *
 * Return: Always 0.
 */
int main(int ac, char **av, char **env)
{
    (void)ac;
    (void)av;

    char **test = get_path(env);
    char *p;
	/* pointer for erase **string */
    char **ptr = test;
	/* pointer for erase *string */ 
    char **ptr2 = test;

    while (*test != NULL)
    {
        p = *test;
        printf("%s\n", p);
        test++;
    }

	/* free the memory var **ponter */
    while (*ptr != NULL)
    {
      p = *ptr;
      free(p);
      ptr++;
    }
    free(ptr2);
    return (0);
}
