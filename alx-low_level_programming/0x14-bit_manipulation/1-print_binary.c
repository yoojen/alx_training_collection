#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
* print_binary -> print in binary form
* @n: number to convert
* Return: void
*/

void print_binary(unsigned long int n)
{
	unsigned long int bits = 1 << (sizeof(unsigned int) * 4 - 1);
	char value = '0';

	while (!(bits & n) && bits != 0)
		bits >>= 1;

	if (bits == 0)
		write(1, &value, 1);
	while (bits > 0)
	{

		if (bits & n)
			value = '1';
		else
			value = '0';
		write(1, &value, 1);
		bits >>= 1;
	}

}
