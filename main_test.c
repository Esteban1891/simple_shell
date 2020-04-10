#include "shell.h"
/**
 *
 */

int main_test(int ac, char **av, char **env)
{
    (void)ac;
    (void)av;

    char **test = get_path(env);
    if (test == NULL)
      return (0);
    char *p;
 
    int i = 0;

    while (test[i] != NULL)
    {
        p = test[i];
        printf("%s\n", p);
        i++;
    }
    /*while (i > 0)
    {
      free(test[j]);
      j++;
      i--;
    }*/
    test = free_dp(test);
    return (0);
}
