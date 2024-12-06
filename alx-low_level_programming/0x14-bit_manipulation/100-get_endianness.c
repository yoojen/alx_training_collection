#include <stdio.h>
#include "main.h"

/**
* get_endianness -> check whether machine endianess
* Return: 0 or 1
*/

int get_endianness(void)
{
	unsigned int num = 1;
	char *c;

	c = (char *)&num;

	if (*c == 1)
		return (1);
	else
		return (0);
}

