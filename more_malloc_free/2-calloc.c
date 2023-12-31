#include "main.h"
#include <stdlib.h>
/**
 * _calloc - Allocates memory for an array
 * Return: Allocates memory for an array
 * @nmemb: numbers
 * @size: size
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;
	unsigned int i;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	array = malloc(nmemb * size);
	if (array == NULL)
		return (NULL);
	p = array;
	for (i = 0; i < nmemb * size; i++)
		p[i] = 0;
	return (array);
}
