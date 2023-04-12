#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - initalizes an array
 * @size: size of array
 * @c: character to be initialized
 * Return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *buffer = malloc(size * sizeof(char));

	if (size == 0|| buffer == NULL)
	{
		return (NULL);
	}

	for (int i = 0; i < size; i++)
	{
		buffer[i] = c;
	}
	return (buffer);
}
