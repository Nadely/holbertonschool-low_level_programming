#include "main.h"
/**
 * _atoi - fonction
 * Return: fonction
 * @s: pointer
 */
int _atoi(char *s)
{
	int signe = 1;
	int resultat = 0;
	int i = 0;

	if (s[0] == '-')
	{
		signe = -1;
		i++;
	}
	else if (s[0] == '+')
	{
		i++;
	}
	for (; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			int chiffre = s[i] - '0';
			resultat = resultat * 10 + chiffre;
		}
		else
		{
			break;
		}
	}
	return (signe * resultat);
}
