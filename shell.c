#include "main.h"

int main(__attribute__((unused)) int argc,
	__attribute__((unused)) char **argv, char **environment)
{
	vars_t vars = {NULL};
	char *prompt = "($) ";
	char *delimiter = " \n";
	size_t lineSize = 0;
	char (*f)(vars_t *);

	_puts(prompt);

	while ((getline(&vars.buffer, &lineSize, stdin)) != -1)
	{
		vars.array = tokenizer(vars.buffer, delimiter);
		if (vars.array == NULL)
		{
			if (isatty(STDIN_FILENO))
				_puts(prompt);
			continue;
		}
		else
		{
			f = match(&vars);
			if (f != NULL)
				f(&vars);

			else if (f == NULL)
			{
				if ((access(vars.array[0], F_OK)) != -1)
				{
					checkpath(vars, environment);
					if (isatty(STDIN_FILENO))
						_puts(prompt);
					continue;
				}
				if (concatpath(vars, environment) == 0)
				{
					if (isatty(STDIN_FILENO))
					{
						_puts(vars.buffer);
						_puts(": command not found\n");
					}
					if (isatty(STDIN_FILENO))
						_puts(prompt);
					continue;
				}
			}
			if (isatty(STDIN_FILENO))
				_puts(prompt);
		}
	}
	if (isatty(STDIN_FILENO))
		_putchar('\n');

	return (0);
}
