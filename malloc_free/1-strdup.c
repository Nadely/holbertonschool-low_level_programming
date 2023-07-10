#include "main.h"
#include <stdlib.h>
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
			array[i] = *str;
		}
		return (array);
	}
	free(array);
	return (NULL);
}
