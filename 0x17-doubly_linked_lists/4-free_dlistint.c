#include "lists.h"

/**
*free_dlistint - frees list
*@head: pointer to start of the list
*Return: nothing
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head, *tmp;

	while (ptr != NULL)
	{
		tmp = ptr->next;
		free(ptr);
		ptr = tmp;
	}
}
