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
for (y = 0; y <= size; y++)
{
_putchar(35);
}
_putchar('\n');
y = 0;
}
if (size <= 0)
_putchar('\n');
}
