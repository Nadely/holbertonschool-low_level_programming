#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array
 * Return: creates an array
 * @min: mini
 * @max: maxi
 */
int *array_range(int min, int max)
{
	int i, j;
	int *array;

	if (min > max)
		return (NULL);
	j = max - min + 1;
	array = malloc(j * sizeof(int));
	if (array == NULL)
		return (NULL);
	for (i = 0; i < j; i++)
		array[i] = min + i;
	return (array);
}
