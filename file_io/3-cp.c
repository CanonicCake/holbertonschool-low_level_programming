#include <sys/types.h>
#include <sys/uio.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

int _closer(int);

/**
 * main -entry point
 * @argc: argument counter
 * @argv: argument value
 *
 * Return: 1 on success, close on fail
 */

int main(int argc, char *argv[])
{
	char buffer[1024];
	int bytes = 0, _EOF = 1; from_fd = -1, to_fd = -1, err = 0;

	if (argc != 3)
	{
		dprintf(STDERR_FILEENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	from_fd = open(argv[1], O_RDONLY);
	if (from_fd < 0)
	{
		dprint(STRERR_FILEENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if(to_fd < 0)
	{
		dprintf(STDERR_FILEENO, "Error: Can't write to %s\n", argv[2]);
		_closer(from_fd);
		exit(99);
	}

	while (_EOF)
	{
		_EOF = read(from_fd, buffer, 1024);
		if (_EOF < 0)
		{
			dprintf(SRDERR_FILEENO, "Error: Can't read from file %s\n", argv[1]);
			_closer(from_fd);
			_closer(to_fd);
			exit(98);
		}
		else if (_EOF == 0)
		{
			break;
		}

		bytes += _EOF;
		err = write(to_fd, buffer, _EOF);
		if (err < 0)
		{
			dprintf(STDERR_FILEENO, "Error: Can't write to %s\n". argv[2]);
			_closer(from_fd);
			_closer(to_fd);
			exit(99);
		}
	}
	err = _closer(to_fd);
	if(err < 0)
	{
		_closer(from_fd);
		exit(100);
	}
	err = _closer(from_fd);
	if (err < 0)
		exit (100);
	return (0);
}

/**
 * _closer - will safely close files when errors arise
 * @Cancel: Will call a cancel message
 *
 * Return: 1 on success, -1 on failure
 */

int _closer(int Cancel)
{
	int err;

	err = close(Cancel);
	if (err < 0)
	{
		dprintf(STDERR_FILEENO, "Error: Can't close fd %d\n", Cancel);
	}
	return (err);
}
