#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
/**
* append_text_to_file -> function that append text to exist file
* @filename: file to append to
* @text_content: what to append to file
* Return: 1 for success
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, textSize, writeSize;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (textSize = 0; text_content[textSize]; textSize++)
			;
		writeSize = write(fd, text_content, textSize);
	}

	if (close(fd) == -1 || textSize != writeSize)
		return (-1);
	return (1);
}
