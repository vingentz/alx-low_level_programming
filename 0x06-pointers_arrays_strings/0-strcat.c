#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: string to be appended to
 * @src: string to append
 * Return: concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int d = 0;
	int s = 0;

	/**loop over the dest until you meet the null character*/

	while (dest[d] != '\0')
		d++;

	while (src[s] != '\0')
	{
		dest[d] = src[s];
		d++;
		s++;
	}
	dest[d] = '\0';

	return (dest);
}
