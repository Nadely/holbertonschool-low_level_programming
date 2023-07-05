#include "main.h"
/**
 * main - proto
 * Return: proto
 * @argc: argument
 * @argv: argument
 */
int main(int argc, char *argv[])
{
	int count;
	if (argc > 1)
	for (count = 0; count < argc; count++)
	{
		_putchar(*argv[count]);
	}
	_putchar('\n');
	return (0);
}
