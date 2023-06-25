#include "main.h"
/**
* print_diagonal - diagonal line
* Return: diagonal line
* @n: numbers
*/
void print_diagonal(int n)
{
int x, y;
for (x = 0; x <= n; x++)
{
_putchar(' ');
_putchar(92);
_putchar('\n');
for (y = 0; y <= x + 1; y++)
{
_putchar(' ');
}
if (n <= 0)
_putchar('\n');
}
}
