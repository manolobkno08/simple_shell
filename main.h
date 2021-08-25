#ifndef _MAIN_SHELL_H
#define _MAIN_SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <limits.h>
#include <signal.h>
#include <fcntl.h>

typedef struct vars
{
	char *buffer;
	char **array;
} vars_t;

typedef struct matcher
{
	char *string;
	char (*f)(vars_t *);
} match_t;

int _strlen(char *str);
int _puts(char *str);
int _putchar(char c);
char *_strcat(char *str1, char *str2);
char *_strdup(char *str);
int _strncmp(char *str, char *str2, int num);

char **tokenizer(char *buffer, char *delimiter);
char *_strtok(char *buffer, const char *delimiter);

void checkpath(vars_t vars, char **environment);
int concatpath(vars_t vars, char **environment);

char (*match(vars_t *m))(vars_t *m);
char esc(vars_t *vars);

#endif