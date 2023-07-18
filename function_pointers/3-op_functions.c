#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - Sum of 2 numbers
 * @a: first number
 * @b: second number
 * Return: Sum of 2 numbers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - difference of 2 numbers
 * @a: first number
 * @b: second number
 * Return: difference of 2 numbers
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - product of 2 numbers
 * @a: first number
 * @b: second number
 * Return: product of 2 numbers
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division of 2 numbers
 * @a: first number
 * @b: second number
 * Return: division of 2 numbers
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - remainder of 2 numbers
 * @a: first number
 * @b: second number
 * Return: remainder of 2 numbers
 */
int op_mod(int a, int b)
{
	return (a % b);
}
