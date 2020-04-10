#include "shell.h"

int no_main (int ac, char **av, char **env)
{
	(void) ac;
	(void) av;
	(void) env;

    int status = 0;

	initiate_shell();
    while (status != -1) {
	
		/* get the input the command line */
		char *argv = _getlines();
		/* split the input line with strtok funtion and return 2d ponter */
		if (argv != NULL)
		{
			char **split_argv = _strtok(argv);
			/* check split_argv[0] for there is an bult-in funtion */
			/* -----CALL FUNTION FOR BULT-IN FUNTIONS----- */
			if (strcmp(split_argv[0],"exit") == 0)
			{
				exit(EXIT_SUCCESS);
			}

			if (strcmp(split_argv[0],"clear") == 0)
			{
				CLEAR_SCREEN;
			}
			/* call the funtion for executing external funtions with exec */
			status = _execev(split_argv);
			/* free memory */
			free(argv);
			split_argv = free_dp(split_argv);
		}
    }
    return 0;
}
