#include "main.h"
/**
 * swap_int - swaps the values
 * Return: swaps the values
 * @a: values
 * @b: values
 */
void swap_int(int *a, int *b)
{
	int c;
	c = *b;
	*b = *a;
	*a = c;
}
