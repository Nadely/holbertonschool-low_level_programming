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
for (y = 0; y <= size; y++)
{
if (size > 0)
_putchar(35);

else if (size <= 0)
_putchar('\n');
}
_putchar('\n');
}
