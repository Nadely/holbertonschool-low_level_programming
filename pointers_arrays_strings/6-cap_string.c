#include "main.h"
/**
 * *cap_string - Capitalizes
 * Return: Capitalizes
 * @s: pointer
 */
char *cap_string(char *s)
{
	int i = 0;
	int capitalize = 1;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (capitalize)
			{
				s[i] -= 32;
				capitalize = 0;
			}
		}
		else if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == ',' || s[i] == ';' || s[i] == '.' || s[i] == '!' || s[i] == '?' || s[i] == '"' || s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}')
		{
			capitalize = 1;
		}
		i++;
	}
	return (s);
}
