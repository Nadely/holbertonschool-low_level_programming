#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints the binary representation of a number
 * @n: number
 *
 * Return:prints the binary representation of a number
 */
void print_binary(unsigned long int n)
{
	int f = 0;
	int i;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (i = sizeof(n) * 8 - 1; i >= 0; i--)
		if ((n >> i) & 1)
		{
			_putchar('1');
			f = 1;
		}
		else if (f)
			_putchar('0');
}
