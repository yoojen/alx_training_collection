#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strchr -> copies a certain number of char
 * @s: string to find from
 * @c: character to be located
 * Return: character
 */

char *_strchr(char *s, char c)
{
	char *rs;

	rs = strchr(s, c);
	return (rs);
}
