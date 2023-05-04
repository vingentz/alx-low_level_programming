#include "main.h"

/**
 * get_bit - returns value of a bit at a n index
 * @n: binary number
 * @index: binary number index
 * Return: bit value at index or -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int num;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	num = ((n >> index) & 1);

	return (num);
}
