#include "main.h"
#include <stdlib.h>

/**
 * array_range -> print from range of two number
 * @min: starting number
 * @max: ending number
 * Return: location to memory allocated
 */

int *array_range(int min, int max)
{
	int *arr;
	int range, i;

	if (min > max)
		return (NULL);

	range = max - min;

	arr = malloc(sizeof(int) * (range + 1));
	if (!arr)
		return (NULL);
	for (i = 0; i <= range; i++)
	{
		arr[i] = min++;
	}
	return (arr);
}
