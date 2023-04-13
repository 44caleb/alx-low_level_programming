#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
*malloc_checked - allocates memory
*@b: size of bytes
*Return: 98 if error occurs
*/

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
