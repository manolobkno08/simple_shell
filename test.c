#include "main.h"

int _strncmp(const char *s1, const char *s2, size_t n)
 {
     size_t i = 0;

     while (s1[i] == s2[i] && i < n)
     {
         s1++;
         s2++;

         if(i + 1 == n)
         {
             break;
         }

         i++;
     }
     
     if (s1[i] == s2[i])
     {
         return (0);
     }
      return (1);
 }

/* my own strtok */
char *_strtok(char * buffer, const char * delimiter)
{
    /* save the reference out of function */
    static char *ref = NULL;
    char *str = NULL;
    char *set = NULL;

    buffer = buffer ? buffer : ref;

    if(*buffer != '\0')
    {
        set = buffer;
        
        if(!*set)
        {
            ref = '\0';
        }
        else
        {
            str = set;

            while ((*set != *delimiter && *set != *(delimiter + 1)) && *set != '\0')
            {
                set++;
            }

            if(*set != '\0')
            {
                *set = '\0';
                set++;
            }
            ref = set;
        }
    }
    return (str);
}


int main( int argc, char *argv[], char *envp[] )
{
    char *buf = NULL;
    int i;
    char *delim = ":=";

    /* acoplar cadenas */
    char *pun1 = NULL;
    char *pun2 = NULL;

    char *duplicate = NULL;

    /* fiel descriptor */
    int fd;

    for(i = 0; i < 30; i++)
    {
            if(_strncmp(envp[i], "PATH", 4) == 0)
            {
                break;
            }
    }

    duplicate = malloc((sizeof(char) * strlen(envp[i])) + 1);
    if(duplicate == NULL)
    {
        return (0);
    }

    duplicate = strdup(envp[i]);

    while((buf = _strtok(duplicate, delim)) != NULL)
    {
            pun1 = strcat(buf, "/");
            /* contiene mi concatenacion + comando */
            pun2 = strcat(pun1, argv[1]);

            if((fd == access(pun2, F_OK)) == 0)
            {
                    break;   
            }
            duplicate = NULL;
    }

    return (0);
}