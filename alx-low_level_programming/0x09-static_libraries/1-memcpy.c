#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _memcpy -> copies a certain number of char
 * @dest: target string
 * @src: character of characters to be copied
 * @n: number of characters to be copied
 * Return: character
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
