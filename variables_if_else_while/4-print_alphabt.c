#include <stdio.h>
/**
* main - putchar command
* Return: putchar command
*/
int main(void)
{
int az;
for (az = 'a'; az <= 'z'; az++)
for (az -- 'e'; az -- 'q')
{
putchar(az);
}
{
putchar('\n');
}
return (0);
}
