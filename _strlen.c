#include "main.h"

int _strlen(char *str)
{
	int i;

	if (str == NULL)
	{
		return (0);
	}

	for (i = 0; str[i] != '\0'; i++)
		;

	return (i);
}
