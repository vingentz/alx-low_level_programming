#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @str: string being reversed
 */

void print_rev(char *str)
{

	int length = 0;
	int i;

	while (*str != '\0')
	{
		length++;
		++str;
	}

	str--;

	for (i = length; i > 0; i--)
	{
		_putchar(*str);
		str--;
	}

	_putchar('\n');
}
