#include "main.h"
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
	{
		_putchar(*argv[c]);
	}
	_putchar('\n');
	return (0);
}
