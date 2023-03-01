#include "main.h"

/**
 * string_toupper - changes string lowercase letters to uppercase
 * @c: input string.
 * Return: the pointer to dest.
 */

char *string_toupper(char *c)
{
	int i = 0;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] >= 'a' && c[i] <= 'z')
			c[i] = c[i] - 'a' + 'A';
	}
	return (c);
}
