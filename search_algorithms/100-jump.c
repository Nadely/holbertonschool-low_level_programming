#include "search_algos.h"
#include <math.h>

/**
 * jump_search - function that searches for a value in a sorted array
 * of integers using the Jump search algorithm
 *
 * @array: pointer on array's adress
 * @size: size of an array
 * @value: values in array
 *
 * Return: Values
 */

int jump_search(int *array, size_t size, int value)
{
	size_t step, prev, start, end, i;

	if (array == NULL || size < 1)
		return (-1);

	step = sqrt(size);
	prev = 0;

	while (prev < size && array[prev] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		prev += step;
	}

	start = prev - step;
	end = prev;

	if (end >= size)
		end = size - 1;

	printf("Value found between indexes [%lu] and [%lu]\n", start, end);

	for (i = start; i <= end; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

		if (array[i] == value)
			break;
	}
	if (prev >= size)
		return (-1);
	return (i);
}
