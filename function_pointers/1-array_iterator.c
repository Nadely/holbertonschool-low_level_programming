#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given as a parameter
 * @array: pointer
 * @size: size of string
 * @action: function of fonction
 * Return: function that executes a function given as a parameter
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t size_of;

	if (action == NULL || array == NULL)
		return;
	for (size_of = 0; size_of < size; size_of++)
	action(array[size_of]); /* function of function */
}
