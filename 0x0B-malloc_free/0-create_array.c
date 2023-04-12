#include "main.h"

#include <stdlib.h>

/**
 *create_array - initalizes an array
 *@size: size of array
 *@c: character to be initialized
 *Description: create an array and assigns each element char c
 *Return: pointer to array
 *
 */

char *create_array(unsigned int size, char c)
{
	int i;
	char *buffer = malloc(size * sizeof(char));

	if (size == 0 || buffer == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		buffer[i] = c;
	}
	return (buffer);
}
