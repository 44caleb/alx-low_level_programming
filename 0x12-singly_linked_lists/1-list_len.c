#include "lists.h"

/**
 * list_len - returns the size of a linked list
 * @h: pointer to the first element of the list
 *
 * Return: size of the linked list
 */
size_t list_len(const list_t *h)
{
	const list_t *ptr = h;
	size_t size = 0;

	while (ptr != NULL)
	{
		size++;
		ptr = ptr->next;
	}
	return (size);
}

