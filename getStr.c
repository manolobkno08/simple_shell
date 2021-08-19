#include "main.h"

int getStringLenght(char *string)
{
	int i;

	if(string == NULL)
	{
		return (0);
	}
	
	for (i = 0; string[i] != '\0'; i++)
	; 

	return (i);
}