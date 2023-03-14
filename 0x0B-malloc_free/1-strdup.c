#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Returns pointer to new duplicate string(str)
 * str - Sting to be duplicated
 * Return: Returns pointer to the duplicated string
 */

char *_strdup(char *str)
{
	char *dstr;
	int i = 0;
	int j = 0;

	if (str == NULL)
		return ('\0');
	while (*(str + i))
	{
		j++;
		i++;
	}
	j++;
	dstr = malloc(sizeof(char) * j);
	if (dstr == NULL)
		return (NULL);
	i = 0;
	while (i < j)
	{
		*(dstr + i) = *(str + i);
		i++;
	}
	return (dstr);
}
