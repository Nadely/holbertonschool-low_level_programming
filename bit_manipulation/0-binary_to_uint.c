#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer of string
 *
 * Return:converts a binary number to an unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	unsigned int mul = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		else
		{
			mul = mul * 2 + (b[i] - '0');
		}
		i++;
	}
	return (mul);
}
