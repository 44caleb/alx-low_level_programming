#include "lists.h"

/**
 * add_node_end - adds a node to the end of the list
 * @head: pointer to a pointer to the first element of the list
 * @str: string element in the node
 * Return: pointer to the added node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp = *head;
	list_t *ptr = malloc(sizeof(list_t));

	if (ptr == NULL)
		return (NULL);

	ptr->str = strdup(str);
	ptr->len = strlen(str);
	ptr->next = NULL;

	while (1)
	{
		if (tmp == NULL)
		{
			*head = ptr;
			break;
		}

		if (tmp->next == NULL)
		{
			ptr->next = tmp->next;
			tmp->next = ptr;
			break;
		}

		tmp = tmp->next;
	}

	return (ptr);
}

