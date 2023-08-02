#include "main.h"
#include <stdio.h>

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number
 * @index: index number
 *
 * Return:returns the value of a bit at a given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int m = 1UL /*"un niveau inatteignable"*/<< index;
	int b;

	if (index > sizeof(unsigned long int) * 8 /* renvoie la taille en bits*/)
		return (-1);

	if ((n & m) != 0)
	{
		b = 1;
	}
	else
	{
		b = 0;
	}

	return (b);
}
