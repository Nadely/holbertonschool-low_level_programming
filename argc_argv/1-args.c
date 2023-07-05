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
	for (count = 0; count < argc; count++)
	{
		int i = _atoi(argv[count]);
		_putchar(i);
	}
	_putchar('\n');
	return (0);
}
