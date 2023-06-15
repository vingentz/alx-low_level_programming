#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Generates & prints passwords for crackme5 executable.
 * @argc: number of arguments supplied.
 * @argv: Array of pointers to the arguments.
 * Return: Always 0
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	char pass[7], *codx;
	int len = strlen(argv[1]), i, tmp;

	codx = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";

	tmp = (len ^ 59) & 63;
	pass[0] = codx[tmp];

	tmp = 0;
	for (i = 0; i < len; i++)
	tmp += argv[1][i];
	pass[1] = codx[(tmp ^ 79) & 63];

	tmp = 1;
	for (i = 0; i < len; i++)
		tmp *= argv[1][i];
	pass[2] = codx[(tmp ^ 85) & 63];

	tmp = 0;
	for (i = 0; i < len; i++)
	{
		if (argv[1][i] > tmp)
			tmp = argv[1][i];
	}
	srand(tmp ^ 14);
	pass[3] = codx[rand() & 63];

	tmp = 0;
	for (i = 0; i < len; i++)
		tmp += (argv[1][i] * argv[1][i]);
	pass[4] = codx[(tmp ^ 239) & 63];

	for (i = 0; i < argv[1][0]; i++)
		tmp = rand();
	pass[5] = codx[(tmp ^ 229) & 63];

	pass[6] = '\0';
	printf("%s", pass);
	return (0);
}
