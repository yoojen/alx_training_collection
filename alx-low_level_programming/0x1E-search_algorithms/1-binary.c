#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_array -> print array on the screen
 * @arr: array to be printed
 * @min: starting point
 * @max: last point
 * Return: void
*/

void print_array(int *arr, int min, int max)
{
	int i;

	printf("Searching in array: ");
	for (i = min; i <= max; i++)
	{
		if (i != max)
			printf("%d, ", arr[i]);
		else
			printf("%d\n", arr[i]);
	}
}

/**
 * binary_search -> use binary search to search
 * @array: array to check in
 * @size: size of an array
 * @value: what to look for
 * Return: -1 n fail index on succes
*/

int binary_search(int *array, size_t size, int value)
{
	int mid, min, max;

	min = 0;
	max = size - 1;
	while (min <= max)
	{
		print_array(array, min, max);
		mid = (min + max) / 2;
		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			min = mid + 1;
		}
		else
		{
			max = mid - 1;
		}
	}
	return (-1);
}
