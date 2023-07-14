#include "main.h"
#include <limits.h>
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
        int chiffre;

	if (s == 0)
		return (0);
	while (s[i] == ' ')
		i++;
	while (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			signe *= -1;
		i++;
	}
	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
			break;
		chiffre = s[i] - '0';
		if (resultat > (INT_MAX - chiffre) / 10)
		{
			if (signe == 1)
				return (INT_MAX);
			else
				return (INT_MIN);
		}
		resultat = resultat * 10 + chiffre;
		i++;
	}
	return (signe * resultat);
}
