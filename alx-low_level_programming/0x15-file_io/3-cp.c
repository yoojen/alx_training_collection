#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"
#define MAX_SIZE 1024

/**
 * checkError -> check error on close of file
 * @fd: file descriptor
 * Return: 0 on sucess
 */
int checkError(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		return (100);
	}
	return (0);
}
/**
 * errorRead -> print error
 * @file_from: sourxe
 * @file_to: dest
 * @filename: arug 2
 * Return: 98
 */
int errorRead(int file_from, int file_to, char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
	checkError(file_from);
	checkError(file_to);
	return (98);
}

/**
 * errorWrite -> output of error
 * @file_from:source
 * @file_to: dst
 * @filename: third argument
 * Return: 99
 */
int errorWrite(int file_from, int file_to, char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
	checkError(file_from);
	checkError(file_to);
	return (99);
}
/**
 * main -> entry
 * @argc: arg count
 * @argv: arg content
 * Return: 0 sucess
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, readSize, writeSize2, errorReturn;
	char buffer[MAX_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY, O_TRUNC);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s, \n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s, \n", argv[2]);
		exit(99);
	}
	do {
		readSize = read(file_from, buffer, MAX_SIZE);
		if (readSize == -1)
			return (errorRead(file_from, file_to, argv[1]));
		writeSize2 = write(file_to, buffer, readSize);
		if (writeSize2 == -1)
			return (errorWrite(file_from, file_to, argv[2]));
	} while (readSize == MAX_SIZE);
	errorReturn = checkError(file_from);
	errorReturn += checkError(file_to);
	return (0);
}
