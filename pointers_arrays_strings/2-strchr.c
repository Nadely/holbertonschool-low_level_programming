#include "main.h"
/**
* *_strchr - locates
* Return: locates
* @s : pointer
* @c: character
*/
char *_strchr(char *s, char c)
{
<<<<<<< HEAD
    while (*s != '\0')
    {
        if (*s == c)
		return (s);
        s++;
    }
    if (*s == c)
	    return (s);

    return (0);
=======
char *a = '\0';
int i;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == '\0')
return (0);
else
if (s[i] == c)
{
a = &s[i];
break;
}
}
return (a);
>>>>>>> e83e512aa66c3343adea3e3871a26d7b7044d0c3
}
