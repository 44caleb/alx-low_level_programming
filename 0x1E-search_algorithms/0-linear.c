#include "search_algos.h"

/**
 *linear_search - linear searching algorithm
 *@array: array to be searched
 *@size: number of elements in the array
 *@value: number to be searched for
 *Return: index of number or -1 if not found
 **/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
