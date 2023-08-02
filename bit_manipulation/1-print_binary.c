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
	int f = 0; /*déterminer si les zéros initiaux doivent être imprimés*/
	int i;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
/*sizeof(n) * 8 - 1:obtenir la taille en octets de n et * 8 pour avoir les bits.
puis, -1 pour obtenir le numéro du bit le plus élevé*/
	for (i = sizeof(n) * 8 - 1; i >= 0; i--)
		if ((n >> i) & 1)/*si le résultat de cette comparaison est vrai,
alors l'expression ((n >> i) & 1) retournera un résultat de 1. Sinon 0*/
		{
			_putchar('1');
			f = 1;
/*Définir le drapeau pour indiquer que les 0 initiaux doivent être imprimés*/
		}
		else if (f) /*Si l'indicateur est activé, imprimer 0*/
			_putchar('0');
}
