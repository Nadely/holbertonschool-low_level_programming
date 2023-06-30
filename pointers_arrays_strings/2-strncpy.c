#include "main.h"
/**
* *_strncpy - Copy
* Return: Copy
* @dest: pointer
* @src: pointer
* @n: num
*/
char *_strncpy(char *dest, char *src, int n)
{
while (dest[n] != '\0')
{
dest[n] = src[n];
n++;
}
return (dest);
}
