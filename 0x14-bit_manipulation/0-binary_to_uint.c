#include "main.h"

/**
 * binary_to_uint - convert binary to unsigned int
 * @b: binary to convert
 * Return: converted number or 0 if any xterin b isnt 0 or 1 or if b=NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int k;
	int xters = 0;
	unsigned int ans = 0;

	if (b == NULL)
		return (ans);
	while (b[xters] != '\0')
		xters++;
	xters -= 1;
	k = 0;
	while (b[k])
	{
		if ((b[k] != '0') && (b[k] != '1'))
			return (0);
		if (b[k] == '1')
			ans += (1 * (1 << xters));
		k++;
		xters--;
	}
	return (ans);
}
