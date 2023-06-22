#include "main.h"
/**
* print_last_digit - last number
* Return: last number
* @x: last
* @n: number
*/
int print_last_digit(int x)
{
int n = x % 10;
{
if (x < 0)
n = n * -1;
_putchar (n);
return(n);
}
return(0);
}

