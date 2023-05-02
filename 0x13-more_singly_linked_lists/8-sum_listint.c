#include "lists.h"

/**
*sum_listint - sums all the data in a linked list
*@head: pointer to first node of list
*Return: sum of data*/

int sum_listint(listint_t *head)
{
    int sum = 0;
    listint_t *ptr = head;

    if (ptr == NULL)
    {
        return 0;
    }

    while (ptr != NULL)
    {
        sum = sum + ptr->n;
        ptr = ptr->next;
    }

    return sum;
}
