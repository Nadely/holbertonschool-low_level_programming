#include "main.h"
/**
 * puts_half - Half
 * Return: Half
 * @str: pointer
 */
void puts_half(char *str)
{
	int l, i;
	for (l = 0; str[l] != '\0'; l++)
	{
		if (l % 2 == 1)
		{
			continue;
		}
	}
	for (i = (l + 1) / 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
