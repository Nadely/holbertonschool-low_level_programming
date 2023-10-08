#include "main.h"
#include "2-strlen.c"
/**
 * *_strcat - concatenates
 * Return: concatenates
 * @dest: pointers
 * @src: pointers
 */
char *_strcat(char *dest, char *src)
{
	int length = _strlen(dest), i;
	while (dest[length] != '\0')
	{
		++length;
	}
	for (i = 0; src[i] != '\0'; ++i, ++length)
	{
		dest[length] = src[i];
	}
	dest[length] = '\0';
	return (dest);
}
