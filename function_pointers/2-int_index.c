#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - Function that searches for an integer
 * @array: pointer
 * @size: size of array
 * @cmp: function of function
 * Return: Function that searches for an interger
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int size_of;

	if (cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	if (array == NULL)
		return (-1);

	for (size_of = 0; size_of < size; size_of++)
	{
		if (cmp(array[size_of]) != 0) /* Fuction of fuction */
			return (size_of);
	}
	return (-1);
}
