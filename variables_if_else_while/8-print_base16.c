#include <stdio.h>
/**
* main - Hexadecimal
* Return: Hexadecimal
*/
int main(void)
{
int numbers, af;
for (numbers = '0'; numbers <= '9'; numbers++)
putchar(numbers);
for (af = 'a'; af <= 'f'; af++)
putchar(af);
putchar('\n');
return (0);
}
