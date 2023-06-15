#include "lists.h"

/**
*sum_dlistint - sums list
*@head: pointer to start of the list
*Return: sum of node data, 0 if list is empty
*/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;
	int sum = 0;

	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
