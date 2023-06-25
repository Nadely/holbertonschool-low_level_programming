#include "main.h"
/**
 * print_triangle - Triangle
 * Return: Triangle
 * @size: size
 */
void print_triangle(int size)
{
int x, y;
for (x = 0; x <= size; x++)
{
for (y = 0; y <= size; y++)
{
_putchar(' ');
_putchar(35);
}
_putchar('\n');
}
if (size <= 0)
_putchar('\n');
}
