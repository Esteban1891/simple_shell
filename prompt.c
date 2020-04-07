#include "shell.h"

/* FUNCION MENSAJE PROMPT*/
void prompt_shell(void)
{
	write(STDOUT, "\e[1;31mMi_shell/user@root$ ", 32);
	write(STDOUT, "\e[0m", 4);
}



