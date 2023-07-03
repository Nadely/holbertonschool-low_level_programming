#include "main.h"
/**
 * factorial - factorial number
 * Return: factorial number
 * @n: numbers
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (n * (factorial(n - 1)));
}
