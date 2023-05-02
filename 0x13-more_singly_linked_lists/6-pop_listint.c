#include "lists.h"

/**
*pop_listint - deletes the head node of a linked list
*@head: address of pointer to the head node
*Return: head node's data
*/

int pop_listint(listint_t **head)
{
    listint_t *ptr = *head;
    int data;

    if (ptr == NULL)
    {
        return (0);
    }

    *head = ptr->next;
    data = ptr->n;
    free(ptr);
    return (data);
}
