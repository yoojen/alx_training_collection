#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Entry point
 * @a: input array
 * @size:array length
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int i, n, tot1 = 0, tot2 = 0;

	for (i = 0; i <= (size * size); i = i + size + 1)
		tot1 += a[i];

	for (n = size - 1; n <= (size * size) - size; n = n + size - 1)
		tot2 += a[n];
	printf("%d, %d\n", tot1, tot2);
}
