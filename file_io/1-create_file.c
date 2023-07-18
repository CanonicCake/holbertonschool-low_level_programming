#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: the file text content
 *
 * Return: 1 on success, -1 on fail
 */

int create_file(const char *filename, char *text_content)
{
	int fdopen, fdwrite, length = 0;

	if (filename == NULL)
		return (-1);

	fdopen = open(filename, O_CREAT | O_RDWR | O_TRUNC, 00600);
	if (fdopen == -1)
	{
		return (-1);
	}

	while (text_content[length] != '\0' && *(text_content + length))
	{	
		length++;
	}

	fdwrite = write(fdopen, text_content, length);
	close(fdopen);
	if (fdwrite < 0)
	{
		return (-1);
	}
	return (1);
}
