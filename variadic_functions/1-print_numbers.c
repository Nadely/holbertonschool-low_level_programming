#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Function that prints numbers
 * @separator: pointer
 * @n: const unsigned int
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list complet; /* Initialize the argument list*/
	unsigned int number;
	
	va_start(complet, n); /* Get the next argument value*/

	for (number = 0; number < n; number++)
	{
		printf("%d", va_arg(complet, int));
		if (separator == NULL && number != n - 1)
		printf("%s", separator);
	}

	va_end(complet); /* Clean up*/
	printf("\n");
}
