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
for (y = 0; y <= size; y++)
_putchar(35);
else
_putchar('\n');
}
_putchar('\n');
}
