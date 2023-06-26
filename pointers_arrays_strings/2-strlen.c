#include "main.h"
/**
* _strlen - returns the length
* Return: returns the length
* @s: points
*/
int _strlen(char *s)
{
if (*s == 0)
{
return (0);
}
return _strlen(s + 1) + 1;
}
