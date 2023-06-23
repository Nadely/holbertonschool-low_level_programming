#include "main.h"
/**
* print_last_digit - last number
* Return: last number
* @n: number
*/
int print_last_digit(int n)
{
int last;
if (n < 0)
{
n = n * -1;
}
last = n % 10;
_putchar ('0' + last);
return (last);
}

