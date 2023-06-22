#include "main.h"
/**
* times_table - 9 table
* Return: 9 table
* @n: numbers
* @o: numbers
* @r: resilt
*/
void times_table(void)
{
int n, o, r;
for (n = 48; n <= 57; n++)
for (o = 48; o <= 57; o++)
r = n * o;
_putchar(r);
_putchar (',');
_putchar ('\n');
}
