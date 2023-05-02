#include "lists.h"

/**
*add_nodeint - adds a node at begining of linked list
*@head: address of pointer to first element in the list
*@n: integer data in the new node
*Return: pointer to the new node added
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t *new = malloc(sizeof(listint_t));

    if (new == NULL)
    {
        return (NULL);
    }

    new->n = n;
    new->next = *head;
    *head = new;
    return (new);
}
