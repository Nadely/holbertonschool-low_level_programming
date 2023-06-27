#include "main.h"
/**
* print_rev - Reverse
* Return: Reverse
* @s: Pointer
*/
void print_rev(char *s)
{
if (*s == 0)
_putchar('\n');
else
int c;
for (c = 0; s[c] != '\0'; c++)
;
for (; c >= 0 ; c--)
{
_putchar(s[c]);
}
_putchar('\n');
}
