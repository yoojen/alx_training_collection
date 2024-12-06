#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* set_bit -> return bit at specified index
* @n: number as input
* @index: position to get bit from
* Return: new bit
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned int) * 16 - 1)
		return (-1);
	*n |= (1 << index);

	return (1);
}

