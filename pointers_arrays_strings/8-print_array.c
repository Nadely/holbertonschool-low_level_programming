#include "main.h"
#include "stdio.h"
/**
 * print_array - Array
 * Return: Array
 * @a: pointer
 * @n: numbers
 */
void print_array(int *a, int n)
{
	int l;
	for (l = 0; l < n; l++)
	{
		printf("%d", l[a]);
		if (l != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
