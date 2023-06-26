#include "main.h"
/**
* _puts - followed
* Return: followed
* @str: string
*/
void _puts(char *str)
{
if (*str > 0)
_putchar(*str);
else if (*str == 0)
_putchar('\n');
}
