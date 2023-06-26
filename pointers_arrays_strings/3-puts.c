#include "main.h"
/**
* _puts - followed
* Return: followed
* @str: string
*/
void _puts(char *str)
{
int count;
while (str != '\0')
{
count++;
str++;
}
_putchar(count);
_putchar('\n');
}
