#include "main.h"
/**
* puts_half - Half
* Return: Half
* @str: pointer
*/
void puts_half(char *str)
{
int l, i;
for (l = 0; str[l] != '\0'; l++)
if (l % 2 == 1)
{
l++;
}
for (i = 0; str[i] != '\0'; i++)
{
if (i >= l / 2)
_putchar(str[i] + 1);
}
_putchar('\n');
}
