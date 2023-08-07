#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
* read_textfile - reads a text file and prints it to the POSIX standard output
* @filename: pointer
* @letters: text
* Description: reads a text file and prints it to the POSIX standard output
*
* Return: reads a text file and prints it to the POSIX standard output
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file = open(filename, O_RDONLY);
	char *memory = malloc(letters * sizeof(char));
	int read_file = read(file, memory, letters);
	int write_file = write(STDOUT_FILENO, memory, read_file);

	if (filename == NULL)
		return (0);

	if (file == -1)
		return (0);

	if (memory == NULL)
	{
		close(file);
		return (0);
	}

	if (read_file <= 0)
	{
		close(file);
		free(memory);
		return (0);
	}

	if (write_file <= 0 || write_file != read_file)
	{
		close(file);
		free(memory);
		return (0);
	}

	close(file);
	free(memory);
	return (write_file);
}
