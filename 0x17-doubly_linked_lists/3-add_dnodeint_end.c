#include "lists.h"

/**
*add_dnodeint_end - adds a node at end of list
*@head: address of pointer to start of the list
*@n: int data of the node
*Return: address of new element, NULL if failed
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr = *head;
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;

	if (ptr == NULL)
	{
		new->next = *head;
		*head = new;
		new->prev = NULL;
		return (new);
	}

	while (ptr != NULL)
	{
		if (ptr->next == NULL)
		{
			new->next = NULL;
			new->prev = ptr;
			ptr->next = new;
			return (new);
		}
		ptr = ptr->next;
	}
	return (NULL);
}
