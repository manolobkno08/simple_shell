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
    char * buffer; 
    /* esto es lo que me devuelve mi tokenizer */
    char ** array;
}vars_t;

typedef struct matcher
{
    char * string;
    char (*f)(vars_t *);
} match_t;

int getStringLenght(char *string);
char **tokenizer(char * buffer, char * delimiter);
char *_strtok(char * buffer, const char * delimiter);

char (* match(vars_t * m))(vars_t * n);
char file1(vars_t * vars);
char esc(vars_t * vars);

#endif