#include "main.h"
/**
* print_square  - square line
* Return: square line
* @size: numbers
*/
void print_square(int size)
{
int x, y;
if (size > 0)
{
for (x = 0; x <= size; x++)
{
_putchar(35);
for (y = 0; y <= size; y++)
_putchar('\n');
}
else if ( size <= 0)
_putchar('\n');
}
}
