#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
* read_textfile -> function that reads text from file
* @filename: file to append to
* @letters: size of text to be read from file
* Return: size of what to be written on the screen
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t readSize, writeSize;
	char *buffer; /* which will store copied chars */

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));

	readSize = read(fd, buffer, letters);
	writeSize = write(STDOUT_FILENO, buffer, readSize);

	if (writeSize == -1)
		return (0);

	if (readSize != writeSize)
		return (0);

	close(fd); /* closes fd */
	free(buffer); /* release memory allocated for buffer */
	return (writeSize);
}
