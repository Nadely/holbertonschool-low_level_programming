#include "main.h"
/**
 * *string_toupper - Changes
 * Return: Changes
 * @a: pointer
 */
char *string_toupper(char *a)
{
	int i;
	for (i = 0; a[i]; i++)
	{
		if (a[i] >= 97 && a[i] <= 122)
		{
			a[i] -= 32;
		}
	}
	return (a);
}
