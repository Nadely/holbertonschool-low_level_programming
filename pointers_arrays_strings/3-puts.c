#include "main.h"
/**
* _puts - followed
* Return: followed
* @str: string
*/
void _puts(char *str)
{
int c;
for (c = 0; c <= *str; c++)
if (*str == 0)
_putchar('\n');
else
{
_putchar(*str);
_putchar('\n');
}
}
