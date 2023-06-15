#include "lists.h"

/**
*dlistint_len - returns number of elements in a list
*@h: pointer to start of the list
*Return: number of nodes
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t num = 0;
	const dlistint_t *ptr = h;

	while (ptr != NULL)
	{
		num++;
		ptr = ptr->next;
	}
	return (num);
}
