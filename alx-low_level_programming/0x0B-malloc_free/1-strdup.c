#include "main.h"
#include <stdlib.h>
/**
 * _strdup -> duplicate string
 * @str: string to be duplicated
 * Return: char
 */

char *_strdup(char *str)
{
	int size = 0;
	char *rs, *ptr;

	if (str == NULL)
	{
		return (NULL);
	}
	ptr = str;

	while (*ptr++)
	{
		size++;
	}

	rs = malloc(size + 1);

	if (!rs)
		return (NULL);
	ptr = rs;

	while (*str++)
		*ptr++ = *str++;
	*ptr = 0;
	return (rs);
}
