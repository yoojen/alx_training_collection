#include "main.h"
#include <stdlib.h>

/**
* _calloc -> allocate memory for array
* @nmemb: number of element
* @size: size of array
* Return: void
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int i, range;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc(nmemb * size);

	if (arr == NULL)
		return (NULL);
	range = nmemb * size;
	for (i = 0; i < range; i++)
		arr[i] = 0;
	return (arr);
}
