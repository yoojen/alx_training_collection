#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * reverse_array -> reverse array
 * @a: 1 param
 * @n: second param
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, numOfItimes, k;

	i = 0;
	numOfItimes = 0;

	while (i < n)
	{
		numOfItimes++;
		i++;
	}

	for (k = numOfItimes - 1; k >= 0; k--)
	{
		if (i > k + 1)
		{
			printf(", ");
		}
		printf("%d", a[k]);
	}
	printf("\n");
}
