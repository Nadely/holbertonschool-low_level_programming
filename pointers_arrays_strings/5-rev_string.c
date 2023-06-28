#include "main.h"
#include "2-strlen.c"
/**
* rev_string - reverses
* Return: reverses
* @s: pointer
*/
void rev_string(char *s)
{
int i, l = _strlen(s) - 1;
char tmp;
for (i = 0; i < (_strlen(s) / 2); i++)
{
tmp = s[i];
s[i] = s[l];
s[l] = tmp;
l--;
}
}
