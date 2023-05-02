#include "lists.h"

/**
*free_listint - frees linked list
*@head: pointer to first element of list
*Return: nothing
*/

void free_listint2(listint_t **head)
{
    listint_t *tmp;
    listint_t *ptr = *head;
    *head = NULL;
    
    while (ptr != NULL)
    {
        tmp = ptr->next;
        free(ptr);
        ptr = tmp;
    }
}
