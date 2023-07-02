#include "main.h"
/**
 * _strspn - prefix
 * Return: prefix
 * @s: pointer
 * @accept: pointer
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned i, j;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j =0; accept[j] != s[i]; j++)
		{
			if (accept[j] == '\0')
				return (i);
		}
	}
	return (i);
}
