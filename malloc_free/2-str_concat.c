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
* str_concat - two strings
* Return: two strings
*@s1: pointer
*@s2: pointer
*/
char *str_concat(char *s1, char *s2)
{
unsigned int i, j;
char *array;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
array = malloc((_strlen(s1) + _strlen(s2) + 1) * sizeof(char));
if (array != NULL)
{
for (i = 0; i < _strlen(s1); i++)
{
array[i] = s1[i];
}
for (j = 0; j < _strlen(s2); j++)
{
array[i + j] = s2[j];
}
array[i + j] = '\0';
return (array);
}
return (NULL);
}
