#include "main.h"
/**
* times_table - 9 table
* Return: 9 table
*/
void times_table(void)
{
int n, o, r;
for (n = '0'; n <= '9'; n++)
for (o = '0'; o <= '9'; o++)
r = n * o;
_putchar(r);
_putchar (',');
_putchar ('\n');
}
