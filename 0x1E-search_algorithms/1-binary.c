#include "search_algos.h"

/**
 * binary_search - binary search algorithm
 * @array: array to be searched
 * @size: number of elements
 * @value: number to be searched for
 * Return: index or -1 if number not found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;

	if (array == NULL)
	{
		return (-1);
	}

	return (recursive_search(left, right, array, value));
}


/**
 * recursive_search - recurisve search func
 * @left: leftmost index position
 * @right: rightmost index position
 * @array: array to be searched
 * @value: number to be searched for
 * Return: index of number, -1 if not found
 */
int recursive_search(size_t left, size_t right, int *array, int value)
{
	size_t i, mid;

	if (left > right)
	{
		return (-1);
	}

	printf("Searching in array: ");

	for (i = left; i <= right; i++)
	{
		if (i == right)
			printf("%d\n", array[i]);
		else
			printf("%d, ", array[i]);
	}
	mid = left + (right - left) / 2;

	if (array[mid] == value)
		return (mid);
	if (array[mid] > value)
		return (recursive_search(left, mid - 1, array, value));
	if (array[mid] < value)
		return (recursive_search(mid + 1, right, array, value));
	return (-1);
}
