#include "main.h"
/**
 * print_rev - Reverse
 * Return: Reverse
 * @s: Pointer
 */
void print_rev(char *s)
{
int c;
for (c = *s; c >= 0; c--)
if (*s == 0)
_putchar('\n');
else
{
_putchar(*s);
_putchar('\n');
}
}
