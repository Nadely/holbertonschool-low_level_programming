#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * main - copy file
 * @argc: argument
 * @argv: double pointer
 * Description: copy file
 *
 * Return: copy file
 */

int main(int argc, char *argv[])
{
	char buffer[1024];
	int file_from, file_to, bytes_read, bytes_written;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_from == -1 || file_to == -1)
	{
		if (file_from != -1)
			close(file_from);
		dprintf(STDERR_FILENO, "Error: Can't open or create file\n");
		exit(98);
	}
	while ((bytes_read = read(file_from, buffer, sizeof(buffer))) > 0)
	{
		bytes_written = write(file_to, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
		{
			close(file_from);
			close(file_to);
			dprintf(STDERR_FILENO, "Error: Can't write to file\n");
			exit(99);
		}
	}
	if (bytes_read == -1)
	{
		close(file_from);
		close(file_to);
		dprintf(STDERR_FILENO, "Error: Can't read from file\n");
		exit(98);
	}
	close(file_from);
	close(file_to);
	return (0);
}
