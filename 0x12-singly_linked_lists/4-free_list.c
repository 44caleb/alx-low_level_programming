#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: pointer to first element of list
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *ptr = head;
	list_t *tmp;

	while (ptr != NULL)
	{
		tmp = ptr->next;
		free(ptr->str);
		free(ptr);
		ptr = tmp;
	}
}

