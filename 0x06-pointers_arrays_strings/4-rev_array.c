#include "main.h"

/**
 * reverse_array - reverses integer-array content.
 * @a: array.
 * @n: number of elements of the array.
 * Return: does not return anything.
 */

void reverse_array(int *a, int n)
{
	int i, j, t  = 0;

	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			t = *(a + j);
			*(a + j) = *(a + (j - 1));
			*(a + (j - 1)) = t;
		}
	}
}
