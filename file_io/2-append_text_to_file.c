#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>

/**
 * append_text_to_file - that appends text at the end of a file
 * @filename: pointer file
 * @text_content: pointer text
 * Description: that appends text at the end of a file
 *
 * Return: that appends text at the end of a file
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file = open(filename, O_WRONLY | O_APPEND);
	int len = 0;
	int write_file;

	if (filename == NULL)
		return (-1);

	if (file == -1)
		return (-1);

	if (text_content != NULL)
	/*Si le paramètre du contenu texte est différent de nul*/
	{
		len = strlen(text_content);
		write_file = write(file, text_content, len);

		if (write_file == -1 || write_file != len)
		/*écriture du contenu dans le fichier*/
		{
			close(file);
			return (-1);
		}
	}
	close(file);
	return (1);
}
