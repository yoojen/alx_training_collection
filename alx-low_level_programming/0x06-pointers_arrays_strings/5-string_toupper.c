#include "main.h"

/**
 * string_toupper -> changes string to upper
 * @x: param
 * Return: character
 */

char *string_toupper(char *x)
{
	int len = 0;

	while (x[len])
	{
		if (x[len] >= 97 && x[len] <= 122)
		{
			x[len] -= 32;
		}
		len++;
	}
	return (x);
}
