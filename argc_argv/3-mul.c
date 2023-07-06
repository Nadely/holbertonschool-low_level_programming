#include "main.h"
#include <stdio.h>
/**
* main - proto
* Return: proto
* @argc: argument
* @argv: argument
*/
int main(int argc, char *argv[])
{
	int i = 0, j = 0, m, r;
	if (argc != 3)
	{
		printf("ERROR\n");
		return (1);
	}
	else
	{
		for (m = 0; argv[i][m] != '\0'; m++)
		{
			i = i * 10 + (argv[i][m] - '0');
		}
		for (m = 0; argv[j][m] != '\0'; m++)
		{
			j = j * 10 + (argv[j][m] - '0');
		}
			r = i * j;
		printf("%d\n", r);
		return (0);
	}
	return (0);
}
