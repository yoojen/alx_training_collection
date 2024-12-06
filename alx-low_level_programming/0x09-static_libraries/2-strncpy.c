#include "main.h"
#include <string.h>

/**
 * _strncpy -> returns copied char
 * @dest: param1
 * @src: source of char
 * @n: number of characters to be copied
 * Return: character
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
