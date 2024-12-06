#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* clear_bit -> clear bit at specified index
* @n: number as input
* @index: position to get bit from
* Return: 1
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned int) * 16 - 1)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}

