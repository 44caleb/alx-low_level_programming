#include "lists.h"

/**
*insert_dnodeint_at_index - insert node at a given index
*@h: address of pointer to start of the list
*@idx: index location
*@n: int data of node
*Return: address of node, NULL if failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr = *h, *new, *before;
	unsigned int i = 0;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;

	if (idx == 0 && ptr == NULL)
	{
		new->next = NULL;
		new->prev = NULL;
		*h = new;
		return (new);
	}

	while (i <= idx)
	{
		if (i == idx)
		{
			before = ptr->prev;
			new->next = ptr;
			new->prev = before;
			ptr->prev = new;
			if (before != NULL)
			{
				before->next = new;
			}
			else
			{
				*h = new;
			}
			return (new);
		}
		if (ptr == NULL)
		{
			return (NULL);
		}
		i++;
		ptr = ptr->next;
	}
	return (NULL);
}
