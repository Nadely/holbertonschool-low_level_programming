#include <stdio.h>
/**
* main - putchar command and except
* Return: putchar command and except
*/
int main(void)
{
int az;
for (az = 'a'; az <= 'z'; az++)
{
putchar(az);
except('q', 'e');
}
{
putchar('\n');
}
return (0);
}
