#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * op_add - add two integers
 * @a: integer one
 * @b: integer two
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtract two integers
 * @a: integer one
 * @b: integer two
 * Return: difference
 */
int op_sub(int a, int b);
{
	return (a - b);
}
/**
 * op_mul - multiply two integers
 * @a: integer one
 * @b: integer two
 * Return: product
 */
int op_mul(int a, int b);
{
	return (a * b);
}
/**
 * op_div - divide two integers
 * @a: integer one
 * @b: integer two
 * Return: result
 */
int op_div(int a, int b);
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - divided two integers and show remainder
 * @a: integer one
 * @b: integer two
 * Return: remainder
 */
int op_mod(int a, int b);
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
