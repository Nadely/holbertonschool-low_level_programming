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
for (n = 0; src[n] != '\0'; ++n)
{
dest[n] = src[n];
++n;
}
dest[n] = '\0';
return (dest);
}
