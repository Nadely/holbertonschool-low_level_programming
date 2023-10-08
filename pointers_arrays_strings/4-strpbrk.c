#include "main.h"
/**
 * *_strpbrk - Searches
 * Return: Searches
 * @s: pointer
 *@accept: pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j, p, f = 0;
	for (i = 0; s[i] != '\0'; i++)
		p = i;
	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (accept[i] == s[j])
			{
				if (j <= p)
				{
					p = j;
					f = 1;
				}
			}
		}
	}
	if (f == 1)
	{
		return (&s[p]);
	}
	else
	{
		return (0);
	}
}
