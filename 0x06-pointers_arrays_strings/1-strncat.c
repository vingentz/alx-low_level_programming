#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: string that is added to
 * @src: string to be appended
 * @n: the number of bytes from @src
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int d = 0;
	int s = 0;

	while (dest[d] != '\0')
		d++;

	while (src[s] != src[n])
	{
		dest[d] = src[s];
		d++;
		s++;
	}
	dest[d] = '\0';

	return (dest);
}
