#include "main.h"
#include <stdlib.h>
/**
 * binary_to_uint - Entry Point
 * @b: const char
 * Return: 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;
	int base = 1, len = 0;

	if (b == NULL)
		return (0);

	while (b[len + 1])
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		len++;
	}

	while (len >= 0)
	{
		dec += ((b[len] - '0') * base);
		base *= 2;
		len--;
	}


	return (dec);
}


