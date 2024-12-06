#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* flip_bits -> clear bit at specified index
* @n: number as input
* @m: number as input
* Return:number of bits to be filped
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bitToFilp;

	bitToFilp = 0;

	while (n || m > 0)
	{
		if ((n & 1) != (m & 1))
			bitToFilp += 1;
		n = n >> 1;
		m = m >> 1;
	}
	return (bitToFilp);
}
