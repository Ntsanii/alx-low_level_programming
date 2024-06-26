#include "hash_tables.h"

/**
 * key_index - Key index of the current item
 * @key: Key to get the index of
 * @size: Size of the array item of the hash table
 * Return: Index of the key
 *
 * Description: Uses the djb2 algorithm
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
