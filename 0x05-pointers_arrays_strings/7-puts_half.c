#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: string to print
 */

void puts_half(char *str)
{
	int index;
	int lent = _strlen(str);

	if (lent % 2 != 0)
		index = (lent / 2) + 1;
	else
		index = (lent / 2);

	while (index < lent)
	{
		_putchar(*(str + index));
		index++;
	}
	_putchar('\n');
}
