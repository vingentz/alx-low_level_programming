#include "main.h"

/**
 * set_bit - sets value of a bit to 1 at index
 * @n: number
 * @index: index
 * Return: 1 if correct else -1 if error.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int test = 1;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	test <<= index;
	*n = (*n | test);
	return (1);
}
