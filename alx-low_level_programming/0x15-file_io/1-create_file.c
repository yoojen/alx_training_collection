#include "main.h"
#include <fcntl.h>
#include <stdlib.h>

/**
* create_file -> function that create a file
* @filename: file to append to
* @text_content: what to write in file in its creation
* Return: 1 if creation success
*/

int create_file(const char *filename, char *text_content)
{
	int fd, textSize, writeSize;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (textSize = 0; text_content[textSize]; textSize++)
			;
		writeSize = write(fd, text_content, textSize);
	}

	if (writeSize == -1 || writeSize != textSize)
		return (-1);
	close(fd);
	return (1);
}
