#include "main.h"
/**
* _puts - followed
* Return: followed
* @str: string
*/
void _puts(char *str)
{
if (*str == '\0')
_putchar('\n');
else
_putchar(*str);
_putchar('\n');
}
