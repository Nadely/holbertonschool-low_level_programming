#include "main.h"
#include "2-strlen.c"
/**
* *_strcpy - copies
* Return: copies
* @dest: pointer
* @src: pointer
*/
char *_strcpy(char *dest, char *src)
{
int i, n = _strlen(src);
for (i = 0; i < n && src[i] >= '\0'; i++)
{
dest[i] = src[i];
}
for (; i < n; i++)
{
dest[i] = '\0';
}
return (dest);
}
