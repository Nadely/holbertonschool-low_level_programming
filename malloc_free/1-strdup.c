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
	return (l);
}
return (0);
}
/**
* _strdup - newly allocated
* Return: newly allocated
* @str: pointer
*/
char *_strdup(char *str)
{
	unsigned int i;
	char *array;
	if (str == NULL)
	{
		return (NULL);
	}
	array = malloc((_strlen(str) + 1) * sizeof(str));
	if (array != NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			array[i] = str[i];
		}
		return (array);
	}
	free(array);
	return (NULL);
}
