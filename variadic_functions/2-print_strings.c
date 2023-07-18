#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - Function that prints strings
 * @separator: pointer
 * @n: const unsigned int
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int num;
	char *string;

	va_start(str, n);

	for (num = 0; num < n; num++)
	{
		string = va_arg(str, char*);
		if (string == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", string);
		}

		if (separator != NULL && num < n - 1)
		printf("%s", separator);
	}

	va_end(str);
	printf("\n");
}
