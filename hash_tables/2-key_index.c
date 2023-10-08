#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * key_index - gives you the index of a key
 * @key: Keys
 * @size: size of the array
 * Return: gives you the index of a key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);
	unsigned long int index;

	index = hash % size;

	return (index);
}
