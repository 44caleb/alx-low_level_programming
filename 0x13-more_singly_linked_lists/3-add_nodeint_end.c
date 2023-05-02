#include "lists.h"

/**
*add_nodeint_end - adds a new node to the end of a linked list
*@head: address to pointer of the first element of list
*@n: integer in the node
*Return: pointer to the new node added
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *tmp = *head;
    listint_t *new = malloc(sizeof(listint_t));

    if (new == NULL)
    {
        return NULL;
    }

    new->n = n;

    while (1)
    {
        if (tmp == NULL)
        {
            new->next = *head;
            *head = new;
            break;
        }

        if (tmp->next == NULL)
        {
            new->next = tmp->next;
            tmp->next = new;
            break;
        }

        tmp = tmp->next;
    }

    return new;
}
