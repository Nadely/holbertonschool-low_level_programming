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
	int f = 0; /*Indicateur permettant de déterminer si les zéros initiaux doivent être imprimés*/
	int i;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (i = sizeof(n) * 8 - 1; i >= 0; i--) /*sizeof(n) * 8 - 1 : Cette partie du code utilise l'opérateur sizeof pour obtenir la taille en octets de la variable n et le multiplie par 8 pour obtenir la taille en bits. Ensuite, on soustrait 1 pour obtenir le numéro du bit le plus significatif (le bit à l'indice le plus élevé)*/
		if ((n >> i) & 1)					 /*si le résultat de cette comparaison est vrai (c'est-à-dire que le bit le plus à droite est un 1), alors l'expression ((n >> i) & 1) retournera un résultat de 1. Sinon, elle retournera un résultat de 0*/
		{
			_putchar('1');
			f = 1; /*Définir le drapeau pour indiquer que les zéros initiaux doivent être imprimés*/
		}
		else if (f) /*Si l'indicateur est activé, imprimer 0*/
			_putchar('0');
}
