#include "main.h"

/**
 * clear_bit - set a bit index to 0
 * @n: binary number
 * @index: index to be cleared
 * Return: 1 if successful else -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int test = 1;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	test = ~(test << index);
	*n = (*n & test);
	return (1);
}
