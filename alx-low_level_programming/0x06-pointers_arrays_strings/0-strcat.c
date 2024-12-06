#include "main.h"

/**
 * _strcat -> return concanated string
 * @dest: 1st param
 * @src: 2nd param
 * Return: character
 */

char *_strcat(char *dest, char *src)
{
	int len = 0, i;

	while (dest[len] != '\0')
	{
		len++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len] = src[i];
		len = len + 1;
	}
	dest[len] = '\0';

	return (dest);
}
