#include <stdio.h>
#include <unistd.h>

int getStringLenght(char *string)
{
    int i;
    for (i = 0; string[i] != '\0'; i++)
    ;

    return (i);
}

int main()
{
    char *prompt = "./$ ";

    /* define puntero * donde voy a almacenar lo que captura getline */
    char *line;
    /* entero que va a indicar cuanto va a valer line */
    size_t lineSize = 0;
    /* guardar caracteres que capture */
    int charactersRead = 0;

    while (1)
    {
        write(STDOUT_FILENO, prompt, getStringLenght(prompt));

        /* recibe los argumentos: recibe  */
        charactersRead = getline(&line, &lineSize, stdin);

        write(STDOUT_FILENO, line, charactersRead);
    }

    return (0);
}