#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
*_strdup - return a pointer to a duplicate string
*@str: the string to be duplicated
*Return: NULL if space insufficient
*/

char *_strdup(char *str)
{
	int i;
	int len = strlen(str);
	char *buffer = malloc((len + 1) * sizeof(char));
	
	if (buffer == NULL || str == NULL)
	{
		return (NULL);
	}	
	for (i=0; i < len; i++)
	{
		buffer[i] = str[i];
	}	
	buffer[len + 1] = '\0';
	return (buffer);
	
}
