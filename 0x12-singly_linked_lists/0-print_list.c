#include "lists.h"

/**
 * print_list - prints elements of a linked list
 * @h: pointer to first element of list
 * Return: size of list
 */
size_t print_list(const list_t *h)
{
	const list_t *ptr = h;
	size_t size = 0;

	while (ptr != NULL)
	{
		if (ptr->str == NULL)
			printf("[%u] %s\n", 0, "(nil)");
		else
			printf("[%u] %s\n", ptr->len, ptr->str);

		size++;
		ptr = ptr->next;
	}
	return (size);
}

