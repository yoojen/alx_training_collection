#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strpbrk -> return number of similar char
 * @s: string to find from
 * @accept: character to be located
 * Return: character
 */

char *_strpbrk(char *s, char *accept)
{
	char *rs;

	rs = strpbrk(s, accept);
	return (rs);
}
