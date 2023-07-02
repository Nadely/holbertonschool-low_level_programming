#include "main.h"
#include <stdio.h>
/**
* print_diagsums - prints the sum
* Return: prints the sum
* @a: pointer
* @size: num
*/
void print_diagsums(int *a, int size)
{
int i, j, k, l;
k = 0;
l = 0;
for (i = 0; i <= (size * size); i = i + size + 1)
k = k + a[i];
for (j = size - 1; j <= (size * size) - size; j = j + size - 1)
l = l + a[j];
printf("%d, %d \n", k, l);
}
