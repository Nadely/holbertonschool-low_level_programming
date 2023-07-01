#include "main.h"
/**
 * *_memcpy - memory copy
 * Return: memory copy
 * @dest: pointer
 * @src: pointer
 * @n: octet
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned a;
	for (a = 0; a <= n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
