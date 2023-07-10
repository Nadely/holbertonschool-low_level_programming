#include "main.h"
#include <stdlib.h>
/**
* create_array - array of chars
* Return: array of chars
* @size: size
* @c: characters
*/
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *array = malloc(size * sizeof(char));
if (array != NULL || size == 0)
{
for (i = 0; i < size; i++)
{
array[i] = c;
}
return (array);
}
return (NULL);
}
