#include "main.h"

/**
 * read_textfile - A function that reads a text file and prints to POSIX stdout
 * @letters: number of letters it will read and print.
 * @filename: name of the file being read or opened.
 * Return: nL, actual number of letters it could read and print or 0 on error.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	/* declaration of variables */
	char *buffer; /* buffer to store the read data */
	ssize_t fd; /* file descriptor for the opened file */
	ssize_t nL;  /* number of bytes written to STDOUT */
	ssize_t t; /* number of bytes read from the file */

	/* opening the file for reading */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0); /* return 0 if file fails to open */

	/* allocating memory for the buffer */
	buffer = malloc(sizeof(char) * letters);

	/* read data from file into the buffer */
	t = read(fd, buffer, letters);

	/* write the read data to the STDOUT */
	nL = write(STDOUT_FILENO, buffer, t);

	/* free allocated memmory */
	free(buffer);
	close(fd);

	return (nL);
}
