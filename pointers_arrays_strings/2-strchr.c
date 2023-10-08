#include "main.h"
/**
 * *_strchr - locates
 * Return: locates
 * @s : pointer
 * @c: character
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (0);
}
