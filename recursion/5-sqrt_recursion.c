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
	if (n == 0 || n == 1)
		return (n);
}
/**
 * _sqrt - first fonction
 * Return: first fonction
 * @n: numbers
 * @i: number
 */
int _sqrt(int n, int i, int f, int m)
{
	if (i > f)
		return (-1);
	m = (i + f) / 2
	{
	if (m == n / m && n % m == 0)
		return (m);
	if (m < n / m)
		return (_sqrt(n, m + 1, f));
	}
	return _sqrt(n, i, m - 1);
}
