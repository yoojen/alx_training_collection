#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* get_bit->return bit at specified index
* @n: number as input
* @index: position to get bit from
* Return: bit
*/
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > sizeof(unsigned int) * 16 - 1)
		return (-1);
	bit = (n >> index) & 1;
	return (bit);
}

