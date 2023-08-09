#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *hash_djb2 - implementing the djb2 algorithm
 * @str: pointer
 * Return: implementing the djb2 algorithm
 */


unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
