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
	int count;
	for (count = 0; count < argc; count++)
	{
		printf("%d", *argv[count]);
	}
	_putchar('\n');
	return (0);
}
