#include "main.h"
#include <stdio.h>

/**
 * append_text_to_file
 * @filename: files name
 * @text_content: content of text
 *
 * Return: 1 on suceess, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wd, length = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd < 0)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	while (*(text_content + length))
	{
		length++;
	}

	fd = write(fd, text_content, length)
	close(fd);
	if(fd < 0)
	{
		return (-1);
	}
	return (1);
}
