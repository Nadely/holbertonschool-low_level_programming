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
if (n <= 0)
_putchar('\n');
else
{
for (y = 0; y <= x; y++)
{
_putchar(x);
_putchar(92);
_putchar ('\n');
}
_putchar(' ');
}
}
}
