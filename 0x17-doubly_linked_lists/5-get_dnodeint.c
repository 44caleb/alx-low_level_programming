#include "lists.h"

/**
*get_dnodeint_at_index - returns the node at a given index
*@head: pointer to start of the list
*@index: index position of node
*Return: adress of node, else NULL
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr = head;
	unsigned int i = 0;

	while (i <= index)
	{
		if (i == index)
		{
			return (ptr);
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
