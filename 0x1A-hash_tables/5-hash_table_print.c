#include "hash_tables.h"

/**
*hash_table_print - prints all elements of a hash table
*@ht: pointer to hash table
*Return: Nothing
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int flag = 0;
	hash_node_t *ptr;

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		ptr = ht->array[i];
		while (ptr != NULL)
		{
			if (flag)
			{
				printf(", ");
			}
			printf("'%s': '%s'", ptr->key, ptr->value);
			flag = 1;
			ptr = ptr->next;
		}
	}
	printf("}\n");
}
