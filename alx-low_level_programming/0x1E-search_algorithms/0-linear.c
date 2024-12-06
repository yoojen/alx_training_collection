#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * linear_search -> implement linear earch
 * @array: array to searched
 * @size: size pf the array
 * @value: target value to be searched
 * Return: index where value is on success -1 on fail
*/
int linear_search(int *array, size_t size, int value)
{
	size_t index;

	for (index = 0; index < size; index++)
	{
		if (array[index] == value)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		return (index);
	}
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
	}

	return (-1);
}
