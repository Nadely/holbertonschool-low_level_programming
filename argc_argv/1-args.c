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
	int c;
	for (c = 0; c < argc; c++)
		printf("%s\n", argv[c]);
	return (0);
}
