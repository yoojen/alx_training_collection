#include "main.h"

/**
 * swap_int : swap integers
 * @a : parameter
 * @b parameter
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;

	*b = temp;
}
