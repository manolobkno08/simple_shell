#include "main.h"

int _puts(char *str)
{
	int num = 0;

	num = _strlen(str);
	write(STDOUT_FILENO, str, num);

	return (0);
}
