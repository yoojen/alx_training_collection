#include "main.h"
#include <stdlib.h>
/**
 * str_concat -> return cononcanated strngs
 * @s1: param1
 * @s2: param2
 * Return: char
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int sz1 = 0, sz2 = 0;
	char *ptr, *rs;

	ptr = s1;

	if (s1)
	{
		while (*ptr++)
		{
			sz1++;
		}
	}
	else
		s1 = "";

	ptr = s2;

	if (s2)
	{
		while (*ptr++)
		{
			sz2++;
		}
	}
	else
		s2 = "";

	rs = malloc(sz1 + sz2 + 1);
	if (!rs)
		return (NULL);

	ptr = rs;

	while (*s1)
		*ptr++ = *s1++;
	while (*s2)
		*ptr++ = *s2++;
	*ptr = 0;

	return (rs);
}
