#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked -> check if memory is allocated
 * @b: size to be allocated
 * Return: array
 */

void *malloc_checked(unsigned int b)
{
	void *arr;

	arr = malloc(b);

	if (!arr)
		exit(98);
	return (arr);
}
