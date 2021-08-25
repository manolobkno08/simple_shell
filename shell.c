#include "main.h"

int main( int argc, char *argv[], char *envp[] )
{
    vars_t vars = {NULL};

    char *prompt = "($) ";

    char *delimiter = " \n";

    char (*f)(vars_t * r);

    /* entero que va a indicar cuanto va a valer line */
    size_t lineSize = 0;
    /* guardar caracteres que capture */
    int charactersRead = 0;

    write(STDOUT_FILENO, prompt, getStringLenght(prompt));

    while (charactersRead = getline(&vars.buffer, &lineSize, stdin) != -1)
    {
        vars.array = tokenizer(vars.buffer, delimiter);

        if(vars.array == NULL)
        {
            write(STDOUT_FILENO, prompt, getStringLenght(prompt));
            continue;
        }
        else
        {
            f = match(&vars);
            if(f == NULL)
            {
                /* trabajar con env */

                printf("No such file or directory");
                putchar('\n');
                write(STDOUT_FILENO, prompt, getStringLenght(prompt));
                continue;
            }
            else
            {
                f(&vars);
            }

            write(STDOUT_FILENO, prompt, getStringLenght(prompt));
        }

        
    }

    putchar('\n');

    return (0);
}