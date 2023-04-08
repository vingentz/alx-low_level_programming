#include "main.h"

/**
 * flip_bits - get number of bits needed to flip a number to another
 * @n: first number to be flipped
 * @m: Number to be gotten after flipping
 * Return: difference in bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count;
	unsigned int bits_needed = 0;

	count = n ^ m;
	
	do
	{
		bits_needed += (count & 1);
		count >>= 1;
	} while
		(count > 0);
	return (bits_needed);
}
