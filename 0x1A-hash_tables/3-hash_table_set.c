#include "hash_tables.h"


/**
*hash_table_set - sets up a hash table
*@ht: pointer to hash table
*@key: key of the element to be inserted
*@value: value of the element
*Return: 1 Success, 0 Failure
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new;

	char *new_value = strdup(value);

	if (new_value == NULL)
	{
		return (0);
	}
	if (key == NULL)
	{
		free(new_value);
		return (0);
	}
	new = malloc(sizeof(hash_node_t));

	if (new == NULL)
	{
		free(new_value);
		return (0);
	}
	index = key_index((unsigned char *)key, ht->size);

	new->key = (char *) key;
	new->value = new_value;
	new->next = (ht->array)[index];
	(ht->array)[index] = new;
	return (1);
}
