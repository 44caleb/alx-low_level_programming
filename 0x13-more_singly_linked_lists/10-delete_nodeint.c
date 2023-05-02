#include "lists.h"

/**
*delete_nodeint_at_index - deletes node at index
*@head: address of pointer to first element of node
*@index: index position of node
*Return: 1 (success), -1 (failure)
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    listint_t *ptr = *head;
    listint_t *delete;
    unsigned int i;

    if (ptr == NULL)
    {
        return -1;
    }

    if (index == 0)
    {
        delete = *head;
        *head = ptr->next;
        free(delete);
        return (1);
    }
    for (i = 0; i < index - 1; i++)
    {
        ptr = ptr->next;

        if (ptr == NULL)
        {
            return (-1);
        }
    }

    delete = ptr->next;
    ptr->next = delete->next;
    free(delete);
    return (1);
}
