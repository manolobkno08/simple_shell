#include "main.h"

char esc(vars_t * vars)
{
    exit(98);
}

char listfiles(vars_t * ls)
{
    pid_t child = fork();
    int status;

    switch (child)
    {
    case 0:
        if(execve("/bin/ls", ls->array, NULL) == -1)
        {
            printf("Coultn´t executed\n");
        }
        break;
    
    case -1:
        printf("Command not executed\n");
        break;
    
    default:
        wait(&status);
        break;
    }
}

char current_dir(vars_t * pwd)
{
    pid_t child = fork();
    int status;

    switch (child)
    {
    case 0:
        if(execve("/usr/bin/pwd", pwd->array, NULL) == -1)
        {
            printf("Coultn´t executed\n");
        }
        break;
    
    case -1:
        printf("Command not executed\n");
        break;
    
    default:
        wait(&status);
        break;
    }
}

char delete_dir(vars_t * rm)
{
    pid_t child = fork();
    int status;

    switch (child)
    {
    case 0:
        if(execve("/usr/bin/rm", rm->array, NULL) == -1)
        {
            printf("Coultn´t executed\n");
        }
        break;
    
    case -1:
        printf("Command not executed\n");
        break;
    
    default:
        wait(&status);
        break;
    }
}