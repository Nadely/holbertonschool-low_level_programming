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
	int _atoi(char *s);
	int i = _atoi(argv[1]), j = _atoi(argv[2]), r = i * j;
	if (argc != 3)
	{
		printf("ERROR\n");
		return (1);
	}
	else
	{
		printf("%d\n", r);
		return (0);
	}
	return (0);
}
