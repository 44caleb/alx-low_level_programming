#include "hash_tables.h"

/**
*key_index - gets the index of a key
*@key: key string
*@size: size of the hashtable
*Return: returns index
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;
	return (index);
}
