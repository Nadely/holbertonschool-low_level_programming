#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * hash_djb2 - hash function using djb2 algorithm
 * @key: the key
 * Return: the hash value
 */
unsigned long int hash_djb2(const unsigned char *key)
{
	unsigned long int hash = 5381;
	int c;

	while ((c = *key++))
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */

	return hash;
}

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
