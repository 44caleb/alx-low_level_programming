#include "lists.h"

/**
*get_nodeint_at_index - returns node at given index
*@head: pointer to first element of list
*@index: index location of node
*Return: pointer to the node at the given index
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
    unsigned int i;
    listint_t *ptr = head;

    for (i = 0; i < index; i++)
    {
        if (ptr == NULL)
        {
            return NULL;
        }
        
        ptr = ptr->next;
    }

    return (ptr);
}
