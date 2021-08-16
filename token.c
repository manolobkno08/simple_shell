#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

/* my own strtok */
char *_strtok(char * str, const char * delimiter)
{
    return (str);
}

char **tokenizer(char *buffer, char *delimiter)
{
    char **tokens = NULL;
    size_t i = 0;
    unsigned int mcount = 1;

    if (buffer == NULL)
    {
        return (NULL);
    }

    tokens = malloc(sizeof(char *) * mcount);

    if((*buffer == '\n' || *buffer == ' ') && *(buffer + 1) == '\0')
    {
        return (NULL);
    }

    while ((tokens[i] = strtok(buffer, delimiter)) != NULL)
    {
        i++;
        if (i >= mcount)
        {
            tokens = realloc(tokens, sizeof(char *) * (i + 1));
            if (tokens == NULL)
                return(NULL);
        }
        buffer = NULL;
        
    }
    return (tokens);
}

void main()
{
    char buffer[] = "Hola Mundo Lindo";
    char *delimiter = " \n";
    char **array;
    
    array = tokenizer(buffer, delimiter);

    while (*array)
    {
        printf("%s\n", *array);
        array++;
    }
    
}