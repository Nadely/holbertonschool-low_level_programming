#include "main.h"
#include "2-strlen.c"
/**
 * *_strncat - concatenates two
 * Return: concatenates two
 * @dest: pointers
 * @src : pointers
 * @n: num
 */
char *_strncat(char *dest, char *src, int n)
{
	int length = _strlen(dest), i;
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[length + i] = src[i];
	}
	dest[length + i] = '\0';
	return (dest);
}
