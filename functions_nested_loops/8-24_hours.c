#include "main.h"
/**
* jack_bauer - Clock
* Return: Clock
*/
void jack_bauer(void)
{
int h, f, m, n;
for (h = 48; h <= 48; h++)
for (f = 48; f <= 51; f++)
for (m = 48; m <= 53; m++)
for (n = 48; n <= 57; n++)
{
_putchar(h);
_putchar(f);
_putchar(':');
_putchar(m);
_putchar(n);
_putchar('\n');
}
}
