#include "main.h"

/**
 * from_to - Reads from and copys to file
 * @copy: content to copy
 */

void from_to(copy_struct *copy)
{
	copy->rd = 1;

	while (copy->rd)
	{
		copy->rd = read(copy->from_file, copy->buffer, 1024);
		if (copy->rd < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", copy->from);
			exit(98);
		}
		copy->wt = write(copy->to_file, copy->buffer, copy->rd);
		if (copy->wt < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", copy->to);
			exit(99);
		}
	}
}
/**
 * copy_file - copy file contents
 * @copy: file to copy content from
 */
void copy_file(copy_struct *copy)
{
	copy->from_file = open(copy->from, O_RDONLY);

	if (copy->from_file < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", copy->from);
		exit(98);
	}
	copy->to_file = open(copy->to, O_CREAT | O_WRONLY | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (copy->to_file < 0)
	{
		dprintf(STDERR_FILENO, "Error: Cant write to %s\n", copy->to);
		exit(99);
	}
	from_to(copy);
	copy->wt = close(copy->from_file);
	if (copy->wt < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file %d\n", copy->from_file);
		exit(100);
	}
	copy->wt = close(copy->to_file);
	if (copy->wt < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file %d\n", copy->to_file);
		exit(100);
	}
}

/**
 * init_struct - starts copy process
 * @copy: copy function
 * @check: check statements
 */
void init_struct(copy_struct *copy, char **check)
{
	if (copy == NULL)
		return;
	if (check == NULL)
		return;
	copy->from = check[1];
	copy->to = check[2];
	copy->buffer = malloc(sizeof(char) * 1204);
	if (copy->buffer == NULL)
		exit(-1);
}
/**
 * main -start point
 * @nocheck: number to check arguments
 * @check: check variables
 * Return: 0
 */
int main(int nocheck, char **check)
{
	copy_struct *cp_command;

	if (nocheck != 3)
	{
		dprintf(STDERR_FILENO, "cp file_from file_to\n");
		exit(97);
	}
	if (check[1] == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", check[1]);
		exit(98);
	}
	if (check[2] == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", check[2]);
		exit(99);
	}
	cp_command = malloc(sizeof(copy_struct));
	if (cp_command == NULL)
		return (0);
	init_struct(cp_command, check);
	copy_file(cp_command);
	return (0);
}
