#include<hash_tables.h>
/**
 * hash_table_create - creates a hash table with a given size
 *
 * @size: size of the hash table
 * Return: the created hash tabl or NULL if function fails
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t* table;
	hash_node_t** item;
	unsigned long int i;

	table = (hash_table_t*) malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	item = malloc(sizeof(hash_node_t *) * size);
	if (item == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		item[i] = NULL;

	table->item = item;
	table->size = size;

	return table;
}
