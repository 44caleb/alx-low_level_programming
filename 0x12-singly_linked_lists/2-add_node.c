#include "lists.h"

/**
 * add_node - adds a node to beginning of list
 * @head: address to the pointer of first element of the list
 * @str: string
 * Return: pointer to the added node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}

