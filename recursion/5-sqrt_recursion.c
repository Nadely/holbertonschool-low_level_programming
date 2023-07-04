#include "main.h"
/**
 * _sqrt : first fonction
 * Return: first fonction
 * _sqrt_recursion - Natural square root
 * Return: Natural square root
 * @n: numbers
 * @i: number
 */
int _sqrt(int n, int i)
{
	i = 1;
	if (i * i > n)
		return (-1);
	else if (i * i == n)
		return (i);
	return (_sqrt(i + 1, n));
}
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (_sqrt(1, n));
}
