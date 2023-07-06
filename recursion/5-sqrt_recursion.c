#include "main.h"
/**
 * _sqrt_recursion - Natural square root
 * Return: Natural square root
 * _sqrt - first fonction
 * Return: first fonction
 * @n: numbers
 * @i: numbers
 * @f: numbers
 * @m: numbers
 */
int _sqrt_recursion(int n)
{
	if(n < 0)
	{
		return -1;
	}
	if(n == 0 || n == 1)
	{
		return n;
	}
	return _sqrt(n, 1, n);
}
int _sqrt (int n, int i, int f)
{
	if(i > f)
	{
		return -1;
	}
	m = (i + f) / 2;
	if(m == n / m && n % m == 0)
	{
		return m;
	}

	if(m < n / md)
	{
		return _sqrt(n, m + 1, f);
	}
	return _sqrt(n, i, m - 1);
}
