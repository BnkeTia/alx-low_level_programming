#include "main.h"

/**
 * create_file - A function that creates a file
 * @filename: A pointer to the name of the file to be created
 * @text_content: A pointer to a string to write to the file.
 * Return: 1 on success, -1 on failure(file ca not be created or written)
 */

int create_file(const char *filename, char *text_content)
{
	int fd, w;
	int length = 0; /* setting the length of text content to 0 */

	if (filename == NULL)
		return (-1); /* return -1 if filename is null */

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	/* opening file for creating and writing, with 0600 permissions */
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	w = write(fd, text_content, length);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);

	return (1);
}
