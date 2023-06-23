#include "main.h"
/**
* jack_bauer - Clock
* Return: Clock
*/
void jack_bauer(void)
{
int h, f, m, n;
for (h = '0'; h <= '2'; h++)
for (f = '0'; f <= '9'; f++){
for (m = '0'; m <= '5'; m++)
for (n = '0'; n <= '9'; n++)
{
_putchar(h);
_putchar(f);
_putchar(':');
_putchar(m);
_putchar(n);
_putchar('\n');
}
}
