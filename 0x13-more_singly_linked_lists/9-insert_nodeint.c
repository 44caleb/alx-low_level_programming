#include "lists.h"

/**
*insert_nodeint_at_index - inserts node at given position
*@head: adress to pointer of the first node
*@idx: index position where noded is inserted
*@n: integer number in the node
*Return: pointer to the new node
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    listint_t *ptr = *head;
    unsigned int i = 0;
    listint_t *new = malloc(sizeof(listint_t));

    if (new == NULL)
    {
        return (NULL);
    }

    new->n = n;
    new->next = NULL;

    for (i = 0; i < idx-1; i++)
    {
        if (ptr == NULL)
        {
            free(new);
            return (NULL);
        }

        ptr = ptr->next;
    }

    new->next = ptr->next;
    ptr->next = new;
    return (new);
}
