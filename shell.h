#ifndef SHELL_H
#define SHELL_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>

/* prototypes owner */
char *_getlines(void);
int _strcmp(char *s1, char *s2);
char **_strtok(char *argv);
int _execev(char **argvs);
char *_strcat(char *dest, char *src);
void free_grid(char **grid);
#endif
