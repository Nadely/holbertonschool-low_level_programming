#include "main.h"
/**
* print_rev - Reverse
* Return: Reverse
* @s: Pointer
*/
void print_rev(char *s)
{
int c;
if (*s == 0)
_putchar('\n');
else
for (c = 0; s[c] != '\0'; c++)
;
<<<<<<< HEAD
s[c] = -1;
for (; c >= 0 ; c--)
=======
for (c = -1; c >= 0 ; c--)
>>>>>>> f705a8033a1f8ace42915da7393f739fd8676f3c
{
_putchar(s[c]);
}
_putchar('\n');
}
