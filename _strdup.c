#include "main.h"

char *_strdup(char *str)
{
	int i = 0;
	char *result = malloc(sizeof(char) * (_strlen(str) + 1));

	if (result == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		result[i] = str[i];
		i++;
	}

	result[i] = '\0';

	return (result);
}
