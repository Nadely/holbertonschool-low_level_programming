#include "main.h"
/**
* times_table - 9 table
* Return: 9 table
*/
void times_table(void)
{
int x, y, som;
for (x = 0; x <= 9; x++)
{
_putchar('0');
_putchar(',');  
for (y = 1; y <= 9; y++)
{
som = x * y;
if (som >= 10)
{
_putchar(' ');
_putchar('0' + (som / 10));
_putchar('0' + (som % 10));
}
else 
{
_putchar('\n');
_putchar('\n');
_putchar('0' + (som % 10));
}
if (y != 9)
_putchar(',');
}
_putchar('\n');
}
}
