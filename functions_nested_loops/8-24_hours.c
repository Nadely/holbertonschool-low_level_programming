#include "main.h"
/**
* jack_bauer - Clock
* Return: Clock
*/
void jack_bauer(void)
{
int h, m;
for (h = 00; h <= 23; h++)
for (m = 00; m <= 59; m++)
{
_putchar(h);
_putchar(':');
_putchar(m);
_putchar('\n');
}
}
