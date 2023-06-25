#include "main.h"
/**
* print_square  - square line
* Return: square line
* @size: numbers
*/
void print_square(int size)
{
int x, y;
for (x = 0; x <= size; x++)
{
for (y = 0; y <= x; y++)
{
_putchar(35);
}
_putchar('\n');
}
if (size <= 0)
_putchar('\n');
}
