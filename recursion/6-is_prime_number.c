#include "main.h"
/**
 * is_prime_number - prime
 * Return: prime
 * @n: numbers
 * @d: num
 */
int _prime(int n, int d)
{
        if (n < 2 && n % d == 0)
		return (0);
	else if (n == 2 || n == 3 || d * d > n)
		return (1);
	return (_prime(n, d + 1));
}
int is_prime_number(int n)
{
	if (n >= 2)
	{
		if (n % 2 == 0)
			return (0);
		else
			return (_prime(3, n));
	}
	return (0);
}
