#include "lists.h"

/**
*print_dlistint - prints all elements of a doubly linked list
*@h: pointer to start of the list
*Return: number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t num = 0;
	const dlistint_t *ptr = h;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		num++;
	}
	return (num);
}
