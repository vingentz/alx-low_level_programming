#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * op_add - struct op
 *
 * @a: integer one
 * @b: integer two
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - struct op
 *
 * @a: integer one
 * @b: integer two
 * Return: difference
 */
int op_sub(int a, int b);
{
	return (a - b);
}
/**
 * op_mul - struct op
 *
 * @a: integer one
 * @b: integer two
 * Return: product
 */
int op_mul(int a, int b);
{
	return (a * b);
}
/**
 * op_div - struct op
 *
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
 * op_mod - struct op
 *
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
