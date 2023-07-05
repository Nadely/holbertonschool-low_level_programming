#include "main.h"
/**
* _puts - followed
* Return: followed
* @str: string
*/
void _puts(char *str)
{
int c;
if (*str == ' ')
_putchar('\n');
else
for (c = 0; str[c] != '\0'; c++)
{
_putchar(str[c]);
}
_putchar('\n');
}
