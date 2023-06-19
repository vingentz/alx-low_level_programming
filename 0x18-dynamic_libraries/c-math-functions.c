#include <stdio.h>

// addition
int add(int a, int b)
{
	return (a + b);
}
// Subtraction
int sub(double a, double b)
{
	return (a - b);
}
// Multiplication
int mul(int a, int b)
{
	return (a * b);
}
// Division
int div(int a, int b)
{
	if (b != 0)
       	{
		return (a / b);
	}
       	else
       	{
		printf("Error: Division by zero!\n");
		return 0;
	}
}
// Modulus calculation
int mod(int a, int b)
{
	if (b != 0)
       	{
		return (((int)a) % ((int)b));
	}
       	else
       	{
		printf("Error: Division by zero!\n");
		return 0.0;
	}
}
