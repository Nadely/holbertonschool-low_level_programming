#include "main.h"
/**
 * puts2 - other character
 * Return: other character
 * @str: pointer
 */
void puts2(char *str)
{
int c;
for (c = 0; str[c] != '\0'; c++)
if (str[c] % 2 != 1)
{
_putchar(str[c]);
}
_putchar('\n');
}
