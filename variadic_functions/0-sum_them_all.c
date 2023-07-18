#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Fuction that returns the sum of all its parameters
 * @n: const unsigned int
 * Return: Fuction that returns the sum of all its parameters
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list ap; /*Initialize the argument list.*/
	unsigned int sum, i;

	if (n == 0)
	return (0);

	va_start(ap, n); /* Get the next argument value. */

	sum = 0;
	for (i = 0; i < n; i++)
	sum += va_arg(ap, unsigned int);

	va_end(ap); /* Clean up. */
	return (sum);
}
