#include "main.h"
/**
 * *_strchr - locates
 * Return: locates
 * @s : pointer
 * @c: character
 */
char *_strchr(char *s, char c)
{
	int i;
	for (i = 0; i <= c; i++)
		if (s[i] == c)
			return (s);
}
