#include "main.h"
/**
* *_strchr - locates
* Return: locates
* @s : pointer
* @c: character
*/
char *_strchr(char *s, char c)
{
char *a = '\0';
int i;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == '\0')
return (0) = NULL;
else if (s[i] == c)
{
a = &s[i];
break;
}
}
return (a);
}
