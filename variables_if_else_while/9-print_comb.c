#include <stdio.h>
/**
* main - Numbers must
* Return: Numbers must
*/
int main(void)
{
int numbers, comma;
for (numbers = '0'; numbers <= '9'; numbers++)
for (comma = ',')
putchar(numbers);
putchar(comma);
putchar('\n');
return (0);
}
