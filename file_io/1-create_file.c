#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>

/**
 * create_file - Create a function that creates a file
 * @filename: pointer file
 * @text_content: pointer text
 * Description: Create a function that creates a file
 *
 * Return: Create a function that creates a file
 */

int create_file(const char *filename, char *text_content)
{
	int file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
/*créer le fichier s'il n'existe pas, l'ouvre et le tronque s'il existe déjà*/
	int len = 0;
	int write_file = 0;

	if (filename == NULL)
		return (-1);

	if (file == -1)
		return (-1);

	if (text_content != NULL)
/*Si le paramètre du contenu texte est différent de nul*/
	{
		len = strlen(text_content);/*obtenir la longueur du texte*/
		write_file = write(file, text_content, len);
		/*écriture du contenu dans le fichier*/
	}
	close(file);

	if (write_file == -1 || write_file != len)
	{
		close(file);
		return (-1);
	}

	close(file);
	return (1);
}
