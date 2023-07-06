#include "main.h"
/**
 * _sqrt_recursion - Natural square root
 * Return: Natural square root
 * @n: numbers
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (_sqrt(1, n));
}
/**
 * _sqrt - first fonction
 * Return: first fonction
 * @n: numbers
 * @i: number
 */
int _sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	else if (i * i == n)
		return (i);
	return (_sqrt(i + 1, n));
}
