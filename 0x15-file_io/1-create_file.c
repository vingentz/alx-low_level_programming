#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file to create
 * @text_content: NULL terminated string to write to file
 * Return: 1 on success else -1
 * -1 if filename is NULL
 */

int create_file(const char *filename, char *text_content)
{
	int len;
	int newfile;
	int byt;

	if (filename == NULL)
		return (-1);

	newfile  = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (newfile < 0)
		return (-1);
	for (len = 0; text_content && text_content[len];)
		len++;
	byt = write(newfile, text_content, len);
	if (byt < 0)
		return (-1);
	close(newfile);
	return (-1);
}
