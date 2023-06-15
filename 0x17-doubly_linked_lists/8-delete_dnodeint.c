#include "lists.h"

/**
*delete_dnodeint_at_index - deletes node at a given index
*@head: address of pointer to start of the list
*@index: index location
*Return: 1 success, -1 failure
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr = *head, *before, *after;
	unsigned int i = 0;

	if (index == 0 && ptr == NULL)
	{
		return (-1);
	}
	while (i <= index)
	{
		before = ptr->prev;
		after = ptr->next;

		if (i == index)
		{
			if (after == NULL && before == NULL)
			{
				free(ptr);
				*head = NULL;
				return (1);
			}
			if (before == NULL)
			{
				after->prev = before;
				*head = after;
				free(ptr);
				return (1);
			}
			if (after == NULL)
			{
				before->next = after;
				free(ptr);
				return (1);
			}
			before->next = after;
			after->prev = before;
			free (ptr);
			return (1);
		}
		i++;
		ptr = ptr->next;
	}
	return (-1);
}
