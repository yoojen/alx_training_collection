#include "function_pointers.h"

/**
 * array_iterator -> perform action on element
 * @array:array to perform action on
 * @size: size of array
 * @action:unction pointer to integer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (!array)
		return;
	if (size <= 0)
		return;
	if (!action)
		return;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
