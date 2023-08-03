#include "main.h"
#include <stdio.h>

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer
 * @index: index number
 *
 * Return:sets the value of a bit to 0 at a given index
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
		unsigned long int m = 1UL << index; /*"un niveau inatteignable"*/
	unsigned long int i;

	if (index > sizeof(unsigned long int) * 8 /* renvoie la taille en bits*/)
		return (-1);

	for (i = 0; i <= index; i++)
	{
		n[i] &= ~m;
		/*&=" prend la valeur de n[i] et la combine avec le résultat suivant*/
		/*"~" inverse chaque bit de m*/
		i++;
	}

	return (1);
}
