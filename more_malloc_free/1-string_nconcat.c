#include "main.h"
#include <stdlib.h>
/**
* _strlen - lenght
* Return: lenght
* @str: pointer
*/
unsigned int _strlen(char *str)
{
unsigned int l;
for (l = 0; str[l] != '\0'; l++)
{
continue;
}
return (l);
}
/**
 * string_nconcat - concatenates two strings
 * Return: concatenates two strings
 * @s1: pointer
 * @s2: pointer
 * @n : numbers
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *array;
	unsigned int l = _strlen(s1);
	unsigned int m = _strlen(s2);

	if (s2 == NULL)
		return ("");
	if (n >= m)
		n = m;
	array = malloc((l + n + 1) * sizeof(char));
	if (array == NULL)
		return (NULL);
	for (i = 0; i < l; i++)
	{
		array[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		array[i + j] = s2[j];
	}
	array[i + j] = '\0';
	return (array);
}
