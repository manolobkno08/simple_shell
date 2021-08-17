#include "main.h"

int main()
{
    /*funcion recibe dos strings -> pasar el line y el path */
    char text[] = "Sebas y Luffy y Nenas";
    const char *separator = " ";

    char *buf = malloc(sizeof(char) * strlen(text));
    
    if(buf == NULL) 
    return (0);

    /* variable donde se almacena */
    char *token;

    /* devuelve un puntero * */
    token = strtok(text, separator);
    int i = 0;
    while (token != NULL)
    {
        printf("%s\n", token);
        buf = (char *)strdup(token);
        token = strtok(NULL, separator);
        free(buf);
        buf++;
        i++;
    }
    printf("%i\n", i);
    free(token);
    
    return (0);
}