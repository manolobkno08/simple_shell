#include "main.h"

int main( int *argc, char **argv, char ** environment)
{
	vars_t vars = {NULL};

	char *prompt = "($) ";

	char *delimiter = " \n";

	char (*f)(vars_t * r);

	int acc;

	/* entero que va a indicar cuanto va a valer line */
	size_t lineSize = 0;
	/* guardar caracteres que capture */
	int charactersRead = 0;

	if(isatty(STDIN_FILENO))
	{
		printf("%s", prompt);
	}

	/* BUCLE SHELL */
	while (charactersRead = getline(&vars.buffer, &lineSize, stdin) != -1)
	{
		vars.array = tokenizer(vars.buffer, delimiter);

		if(vars.array == NULL)
		{
			if(isatty(STDIN_FILENO))
			{
				printf("%s", prompt);
			}
			continue;
		}
		else
		{
			f = match(&vars);

			if(f != NULL)
			{
				f(&vars);
			}

			else if(f == NULL)
			{
				if( acc = access(vars.array[0], F_OK) != -1)
				{
					pid_t child = fork();
					int status;

					switch(child)
					{
						case 0:
						execve(vars.array[0], vars.array, environment);
						break;
						
						case -1:
						printf("Error to create a child proccess");
						break;

						default:
						wait(&status);
						break;
					}
				}
				int i;
				/* buscar path en env */
				for(i = 0; environment[i]; i++)
				{
					int verCompare;
					if ((verCompare = MyStrNCmp(environment[i], "PATH", 4)) == 0)
					{
						break;
					}
					
				}
				char *duplicate;
				duplicate = myStrDup(environment[i]);

				char **tokensEnv;
				tokensEnv = tokenizer(duplicate, ":=");

				i = 0;
				char * concat1;
				char * concat2;

				while(tokensEnv[i] != NULL)
				{
					concat1 = mystrCat(tokensEnv[i], "/");  /*   /usr/bin/   */

					concat2 = mystrCat(concat1, vars.array[0]);  /*   /usr/bin/ls   */

					if(access(concat2, F_OK) == 0)
					{
						pid_t child = fork();
						int status;

						switch(child)
						{
							case 0:
							execve(concat2, vars.array, environment);
							break;
							
							case -1:
							printf("Error to create a child proccess");
							break;

							default:
							wait(&status);
							break;
						}
						break;
					}
					i++;
				}
				continue;

				if(isatty(STDIN_FILENO))
				{
					printf("No such file or directory");
					putchar('\n');
				}
				
				if(isatty(STDIN_FILENO))
				{
					printf("%s", prompt);
				}
				continue;
			}

			if(isatty(STDIN_FILENO))
			{
				printf("%s", prompt);
			}
		}

		
	}

	if(isatty(STDIN_FILENO))
	{
		putchar('\n');
	}
	

	return (0);
}