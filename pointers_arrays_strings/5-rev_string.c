#include "main.h"
#include "2-strlen.c"
/**
* rev_string - reverses
* Return: reverses
* @s: pointer
*/
void rev_string(char *s)
{
int i, l = _strlen(s);
char tmp;
if (l % 2 == 1)
l--;
for (i = 0; i < l / 2; i++)
{
tmp = s[i];
s[i] = s[l];
s[l] = tmp;
l--;
}
}
