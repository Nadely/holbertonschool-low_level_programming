#include "main.h"
#include <stdio.h>

/**
 * flip_bits - returns the number of bits
 * @n: number
 * @m: number
 *
 * Return:returns the number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int d = ((n ^ m) * 2); /*trouver les bits différent entre les 2*/
	unsigned int count = 0;

	while (d > 0)
	{
		/*on verifie si le bits est différent*/
		if (d & 1)
			count++; /*si oui on incémente*/

		d >>= 1;
		/*on décale le nombre pour voir s'il est différent avec le suivant*/
	}
	return (count); /* on revoie le nombre de bits différent en n et m*/
}
