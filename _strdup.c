#include "main.h"

char *_strdup(char *str)
{
	char *result = malloc(sizeof(char) * (_strlen(str) + 1));
	if (result == NULL)
	{
		return NULL;
	}

	int i = 0;
	while(str[i] != '\0')
	{
		result[i] = str[i];
		i++;
	}

	result[i] = '\0';

	return result;
}
