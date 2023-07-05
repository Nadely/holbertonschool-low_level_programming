#include "main.h"
/**
* print_alphabet_x10 - Print 10 alphabet
* Return: Print 10 alphabet
*/
void print_alphabet_x10(void)
{
int az, i;
for (i = 0; i < 10; i++)
{
for (az = 'a'; az <= 'z'; az++)
{
_putchar(az);
}
_putchar('\n');
}
}
