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
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (EXIT_FAILURE);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	operation = get_op_func(argv[2]);

	if (!operation)
	{
		printf("Error\n");
		return (EXIT_FAILURE);
	}
	result = operation(num1, num2);
	printf("%d\n", result);
	return (EXIT_SUCCESS);
}
