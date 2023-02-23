#include "main.h"

/**
 * print_line - Print a straight line on the terminal
 * @n: Number of times '_' is repeated
 */

void print_line(int n)
{
	int i = n;

	for (i = n; i > 0; i--)
		_putchar('_');

	_putchar('\n');
}
