#include <stdio.h>
/**
* main - putchar command (2)
* Return: putchar command (2)
*/
int main(void)
{
int az, AZ;
for (az = 'a'; az <= 'z'; az++) for (AZ = 'A'; AZ <= 'Z'; AZ++)
{
putchar(az);
}
{
putchar(AZ);
}
{
putchar('\n');
}
return (0);
}
