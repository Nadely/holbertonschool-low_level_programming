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
	/* Ouverture du fichier en mode lecture seule*/
	char *memory = malloc(letters * sizeof(char));
	/*Allocation de mémoire pour stocker les caractères lus*/
	int read_file = read(file, memory, letters);
	/*Lecture de 'letters' caractères à partir du fichier*/
	int write_file = write(STDOUT_FILENO, memory, read_file);
	/*Écriture des caractères lus sur la sortie standard*/

	if (filename == NULL)
		return (0);

	if (file == -1)
	/*Si une erreur s'est produite lors de l'ouverture du fichier*/
		return (0);

	if (memory == NULL)
	/*Si une erreur s'est produite lors de l'allocation de mémoire*/
	{
		close(file);
		return (0);
	}

	if (read_file <= 0)
	/* Si une erreur s'est produite lors de la lecture du fichier*/
	{
		close(file);
		free(memory);
		return (0);
	}

	if (write_file <= 0 || write_file != read_file)
	/*Si une erreur s'est produite lors de l'écriture sur la sortie standard*/
	{
		close(file);
		free(memory);
		return (0);
	}

	close(file);
	free(memory);
	return (write_file);
}
