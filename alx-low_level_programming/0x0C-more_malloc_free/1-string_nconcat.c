#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
* char *string_nconcat -> concanated string
* @s1: string1
* @s2: string2
* @n: number of bytes
* Return: chara
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int sz1 = 0, sz2, i;
	char *temp, *rs;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	temp = s1;

	for (sz1 = 0, temp = s1; *temp; temp++)
		sz1++;
	for (sz2 = 0, temp = s2; *temp; temp++)
		sz2++;

	if (n > sz2)
		n = sz2;

	rs = malloc((sz1 + n + 1) * sizeof(char));
	if (!rs)
		return (NULL);

	temp = rs;

	while (*s1)
		*temp++ = *s1++;
	for (i = 0; i < n && s2[i] != '\0'; i++)
		*temp++ = s2[i];
	*temp = 0;

	return (rs);
}
