#ifndef SHELL_H
#define SHELL_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <dirent.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <signal.h>

#define PATH_DELIMIT "=:"
#define DELIMIT " \t\r\n\a\""
#define BUFF_MAX 10 /* max buffer size*/
#define MAXLIST 100 /* max number of commands to be supported.*/
#define STDOUT STDOUT_FILENO /* abbreviating this variable.*/
#define CLEAR_SCREEN write(STDOUT, "\033[H\033[J", 6) /*a macro*/
#define NEW_LINE write(STDOUT, "\n", 1) /*a macro*/

void free_dp(char **line);
int _strlen(char *s);
int _strcmp(char *s1, char *s2);
void _exit_function();
void prompt_shell(void);
char *get_line(int isatty_val);
char **_strtok(char *line_messages);
void _execev(char **line, char *argv, int num, int isatty_val, char **envi);
int is_buit_in(char **line, char **environ);
#endif
