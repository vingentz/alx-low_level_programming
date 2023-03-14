#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
		len++, s++;
	return (len);
}

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argc
 * @av: arguments
 * Return: pointer to array
 */

char *argstostr(int ac, char **av)
{
	char *s;
	int len = 0, i, j, k = 0;

	/* validate input */
	if (ac == 0 || av == NULL)
		return (NULL);

	/* find length to malloc */
	for (i = 0; i < ac; i++)
	{
		len += _strlen(av[i]);
	}
	/* add space for newlines and null terminator */
	len += (ac + 1);

	/* allocate memory and free if error */
	s = malloc(len * sizeof(char));

	if (s == NULL)
	{
		free(s);
		return (NULL);
	}

	/* insert each arg into *str */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < _strlen(av[i]); j++)
		{
			s[k++] = av[i][j];
		}
		s[k++] = '\n';
	}
	return (s);
}
