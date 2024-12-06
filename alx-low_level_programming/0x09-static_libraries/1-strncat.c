#include "main.h"
#include <string.h>

/**
 * _strncat -> return joined string
 * @dest: 1st param
 * @src: 2nd param
 * @n: number of strings
 * Return: string
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
