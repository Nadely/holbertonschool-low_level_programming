#include "main.h"
/**
* _islower - lowercase character
* Return: lowercase character
*/
int _islower(int c)
{
for (c = 'a'; c <= 'z'; c++)
{
if (c >= 'a' && c <= 'z')
{
_putchar(1);
}
else
{
_putchar(0);
}
}
return (0);
}
