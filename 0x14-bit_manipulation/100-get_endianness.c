#include "main.h"

/**
 * get_endianness - checks for endianness
 * Return: 0 if big endian else 1
 */

int get_endianness(void)
{
	int k = 1;
	char *i = (char *) &k;

	return (*i);
}
