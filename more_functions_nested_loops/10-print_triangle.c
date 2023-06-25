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
_putchar('\n');
else
{
for (y = 1; y <= size; y++)
{
for (x = 0; x <= size; x++)
if (y < x)
_putchar(35);
_putchar('\n');
}
}
}
