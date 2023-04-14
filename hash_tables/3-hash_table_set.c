#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>
/**
 * hash_table_set - create a hash table
 * @value: value
 * @ht: table
 * @key: string to encrypt
 * Return: index
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new, *curr_node;
	unsigned long int idx;

	if (key == NULL || ht == NULL)
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	curr_node = ht->array[idx];

	while (curr_node)
	{
		if (strcmp(curr_node->key, key) == 0)
		{
			free(curr_node->value);
			curr_node->value = strdup(value);
			if (curr_node->value == NULL)
				return (0);
			return (1);
		}
		curr_node = curr_node->next;
	}

	new = malloc(sizeof(hash_node_t));

	if (new == NULL)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = ht->array[idx];
	ht->array[idx] = new;
	return (1);
}
