 #include "main.h"
/**
* print_diagonal - diagonal line
* Return: diagonal line
* @n: numbers
*/
void print_diagonal(int n)
{
int x, y;
{
if (n <= 0)
_putchar('\n');
else
{
for (x = 1; x <= n; x++)
{
for (y = 0; y <= x; y++)
{
_putchar(92);
_putchar ('\n');
}
}
}
}
