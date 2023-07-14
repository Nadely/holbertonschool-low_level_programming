#include "main.h"
/**
 * *leet - encode
 * Return: encode
 * @s: pointer
 */
char *leet(char *s)
{
	int i = 0, j;
	char t[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	char u[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

	while (s[i])
	{
		for (j = 0; j < 10; j++)
			if (s[i] == u[j])
			{
				[s[i] = t[j];
				break;
			}
		i++;
	}
	return (s);
}
