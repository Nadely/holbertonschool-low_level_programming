#include "main.h"
/**
 * *_memset - memory
 * Return: memory
 * @s: pointer
 * @b: byte
 * @n: number
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int a;
for (a = 0; a < n; a++)
{
s[a] = b;
}
return (s);
}
