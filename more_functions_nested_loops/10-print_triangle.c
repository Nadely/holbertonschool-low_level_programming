#include "main.h"
/**
* print_triangle - Triangle
* Return: Triangle
* @size: size
*/
void print_triangle(int size)
{
	int x, y;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (y = size; y > 0; y--)
	{
		for (x = 1; x <= size; x++)
		{
			if (x >= y)
				_putchar('#');
			else
				_putchar(' ');
		}
		_putchar('\n');
	}
}
