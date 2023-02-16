#include <stdio.h>
#include <unistd.h>
/**
 * Main: main entry point for the program
 * print and that piece of art is useful
 * Return: 1
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
