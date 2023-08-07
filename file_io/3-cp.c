#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
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
	char temp[1024];
	int file_from = open(argv[1], O_RDONLY);
	int file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 664);
	int read_file = read(file_from, temp, sizeof(temp));
	int write_file = write(file_to, temp, read_file);

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage : %s file_from file_to\n", argv[0]);
			exit(97);
	}

	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
	}

	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[2]);
			exit(99);
	}

	while (read_file > 0)
	{
		if (write_file == -1 || write_file < read_file)
		{
			dprintf(STDERR_FILENO, "Error: Can't write from file %s\n", argv[2]);
			exit(99);
		}
	}

	if (read_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
	}

	if (close(file_from) == -1 || close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error : Can't close file\n");
			exit(100);
	}

	return (0);
}
