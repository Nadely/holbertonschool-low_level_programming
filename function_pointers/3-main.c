#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 * main - Function main
 * @argc: argument
 * @argv: pointer of argument
 * Return: Function main
 */

int main(int argc, char **argv)
{
	int result, num1, num2;
	char *operation;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	num1 = atoi(argv[1]);
	operation = argv[2];
	num2 = atoi(argv[3]);

	if ((*operation == '/' || *operation == '%') && num2 == 0)
	{
		printf("Error\n");
		return (100);
	}

	result = get_op_func(operation)(num1, num2);
	printf("%d\n", result);
	return (EXIT_SUCCESS);
}
