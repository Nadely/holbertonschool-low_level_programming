#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/*
* printf_s - print string
* @all: va_list argument
* Return: print string
*/
void printf_s(va_list all)
{
	char *s = va_arg(all, char *);
	if (s == NULL)
	printf("(nil)");
	else
	printf("%s", s);
}

/*
* printf_c - print char
* @all: va_list argument
* Return: print char
*/
void printf_c(va_list all)
{
	char c = va_arg(all, int);
	printf("%c", c);
}

/*
* printf_i - print int
* @all: va_list argument
* Return: print int
*/
void printf_i(va_list all)
{
	int i = va_arg(all, int);
	printf("%d", i);
}

/*
* printf_f - print float
* @all: va_list argument
* Return: print float
*/
void printf_f(va_list all)
{
	double f = va_arg(all, double);
	printf("%f", f);
}

/**
 * print_all - Function that prints anything
 * @format: const char
 * Return: Function that print anything
*/
void print_all(const char * const format, ...)
{
	pri_t _print [] = {
		{"s", printf_s},
		{"c", printf_c},
		{"i", printf_i},
		{"f", printf_f},
	};
	va_list all;
	int i = 0, j;
	char *separator = "";

	va_start(all, format);

	while (format && format[i]/* condition */)
	{
		j = 0;
		while (j < 4/* condition */)
		{
			if (format[i] == *(_print[j].print))
			{
				printf ("%s", separator);
				_print[j].func(all);
				separator = ", ";
			}
			j++;
		}
		i++;
	}

	va_end(all);
	printf("\n");
}
