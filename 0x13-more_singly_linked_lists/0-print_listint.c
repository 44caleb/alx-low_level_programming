#include "lists.h"

/**
*print_listint - prints elements of a list
*@h: pointer to the first element of the node
*Return: returns the number of nodes
*/

size_t print_listint(const listint_t *h)
{
	const listint_t *ptr = h;
	size_t size = 0;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		size++;
		ptr = ptr->next;
	}
	return (size);
}
