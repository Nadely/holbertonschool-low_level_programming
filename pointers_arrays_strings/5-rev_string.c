#include "main.h"
/**
* rev_string - reverses
* Return: reverses
* @s: pointer
*/
void rev_string(char *s)
{
int c;
for (c = 0; s[c] != '\0'; c++)
;
for (c = s['\0'] - 1; c >= s[0]; c--)
;
}
