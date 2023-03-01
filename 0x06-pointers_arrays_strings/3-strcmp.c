#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: string1 counter
 * @s2: string2 counter
 * Return: int that tells num spaces in between
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
