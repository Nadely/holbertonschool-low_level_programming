#include "main.h"
/**
 * _pow_recursion - Value and raised
 * Return: Value and raised
 * @x: pointer
 * @y: pointer
 */
int _pow_recursion(int x, int y)
{
	if (y >= 0)
	{
		if (y == 1)
			return (x);
		if (y == 0)
			return (1);
		return (x * (_pow_recursion(x, y - 1)));
	}
	else
		return (-1);
}
