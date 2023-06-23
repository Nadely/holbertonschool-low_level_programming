#include "main.h"
/**
* jack_bauer - Clock
* Return: Clock
*/
void jack_bauer(void)
{
int h, f, m, n;
for (h = '0'; h <= '2'; h++)
{
_putchar(h);
}
for (f = '0'; f <= '9'; f++)
{
if ((h <= '2')&&(f <= '3'))
{
_putchar(f);
_putchar(':');
}
else
{
_putchar(f);
_putchar(':');
}
}
for (m = '0'; m <= '5'; m++)
{
_putchar(m);
}
for (n = '0'; n <= '9'; n++)
{
_putchar(n);
_putchar('\n');
}
}
