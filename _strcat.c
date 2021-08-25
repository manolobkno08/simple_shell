#include "main.h"

char *_strcat(char *str1, char *str2)
{
	int i = 0;
	int j = 0;
	char *cat = malloc(sizeof(char) * ((_strlen(str1)) + (_strlen(str2))) + 1);

	if (cat == NULL)
	{
		return (NULL);
	}

	while (str1[i] != '\0')
	{
		cat[i] = str1[i];
		i++;
	}

	while (str2[j] != '\0')
	{
		cat[i] = str2[j];
		i++;
		j++;
	}

	/* asigna el valor nulo al final de concatenar las cadenas */
	cat[i] = '\0';

	return (cat);
}
