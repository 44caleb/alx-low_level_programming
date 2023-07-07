#include "hash_tables.h"


/**
*hash_table_get - gets a value from a hash table
*@ht: pointer to hash table
*@key: key of element
*Return: value
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *ptr;

	if (key == NULL || ht == NULL)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	ptr = ht->array[index];

	while (ptr != NULL)
	{
		if (ptr->key == key)
			return (ptr->value);
		ptr = ptr->next;
	}
	return (NULL);
}
