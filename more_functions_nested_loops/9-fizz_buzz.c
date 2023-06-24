#include "main.h"
/**
* main - Fizz Buzz
* Return: Fizz Buzz
*/
int main(void)
{
int n;
char a = FizzBuzz;
char b = Fizz;
char c = Buzz;
for (n = 1; n <= 100; n++)
{
if ((n % 3 == 0) && (n % 5 ==0))
_putchar(a);
else if (n % 3 == 0)
_putchar(b);
else if (n % 5 ==0)
_putchar(c);
else if
_putchar(n);
_putchar('\n');
}
return (0);
}
