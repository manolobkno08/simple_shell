#include "main.h"

char (* match(vars_t * m))(vars_t * n)
{
    int i;

    match_t op[] = {
        {"hi", file1},
        {"exit", esc},
        {NULL, NULL}
    };
    
    for(i = 0; op[i].f != NULL; i++)
    {
        if(strcmp(op[i].string, m->array[0]) == 0)
        {
            break;
        }
    }
    return (op[i].f);
}

char file1(vars_t * vars)
{
    printf("Hola\n");
    return (0);
}

char esc(vars_t * vars)
{
    exit(98);
}