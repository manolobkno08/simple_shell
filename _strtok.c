#include "main.h"

/* my own strtok */
char *_strtok(char *buffer, const char *delimiter)
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