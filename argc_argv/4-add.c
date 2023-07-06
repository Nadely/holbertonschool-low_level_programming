#include "main.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* main - proto
* Return: proto
* @argc : argument
* @argv: argument
*/
int main(int argc, char *argv[])
{
int r = 0, i, n = 0, j;
if (argc == 1)
{
printf("0\n");
return 0;
}
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return 1;
}
}
n = atoi(argv[i]);
r += n;
}
printf("%d\n", r);
return 0;
}
