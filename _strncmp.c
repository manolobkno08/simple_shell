#include "main.h"

int _strncmp(char *str1, char *str2, int num)
{
	int i = 0;

	/* compara longitud de cadenas */
	while (str1[i] == str2[i] && i < num)
	{
		if (i + 1 == num)
		{
			break;
		}
		i++;
	}

	/* compara que el dato sea igual */
	if (str1[i] == str2[i])
	{
		return (0);
	}
	
	return (-1);
	
}