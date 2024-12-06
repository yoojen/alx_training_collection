#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _memset -> copies a certain number of char
 * @s: target string
 * @b: character of characters to be copied
 * @n: number of characters to be copied
 * Return: character
 */

char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
