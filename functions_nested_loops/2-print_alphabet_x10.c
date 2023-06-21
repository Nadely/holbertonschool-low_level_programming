#include "main.h"
/**
* print_alphabet_x10 - Print 10 alphabet
* Return: Print 10 alphabet
*/
void print_alphabet_x10(void)
{
int az, i = 0;
for (az = 'a'; az <= 'z'; az++)
{
_putchar(az);
}
while (i < 10)
{
_putchar('\n');
i++;
}
}
