#include <stdio.h>
/**
* main - putchar command (2)
* Return: putchar command (2)
*/
int main(void)
{
int az, AZ;
for (az = 'a'; az <= 'z')
for (AZ = 'A'; AZ <= 'Z')
{
putchar(az);
putchar(AZ);
}
{
putchar('\n');
}
return (0);
}
