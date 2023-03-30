#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1 else -1 and err is set
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
