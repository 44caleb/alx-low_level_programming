#include "lists.h"

/**
*listint_len - returns the number of elements in a linked list
*@h: pointer to first element in a list
*Return: number of elements
*/

size_t listint_len(const listint_t *h)
{
    const listint_t *ptr = h;
    size_t size = 0;

    while (ptr != NULL)
    {
        size++;
        ptr = ptr->next;
    }
    return (size);
}
