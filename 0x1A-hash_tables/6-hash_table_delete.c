#include "hash_tables.h"

/**
*hash_table_delete - deletes hash table
*@ht: pointer to hash table
*Return: nothing
*/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *ptr;
	hash_node_t *tmp;
	unsigned long int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		ptr = ht->array[i];
		while (ptr != NULL)
		{
			tmp = ptr->next;
			free(ptr->value);
			free(ptr->key);
			free(ptr);
			ptr = tmp;
		}
	}
	free(ht->array);
	free(ht);
}
