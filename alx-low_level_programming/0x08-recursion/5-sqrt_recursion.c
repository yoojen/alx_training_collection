#include "main.h"

/**
 * checkSqrt -> check sqrt
 * @i:guess at sqrt
 * @num: number to find sqrt
 * Return: integer
 */

int checkSqrt(int num, int i)
{
	int sqroot = i * i;

	if (sqroot > num)
	{
		return (-1);
	}
	if (sqroot == num)
	{
		return (i);
	}
	return (checkSqrt(num, i + 1));
}
/**
 * _sqrt_recursion -> returns sqrt
 * @n: input
 * Return: integer
 */

int _sqrt_recursion(int n)
{
	return (checkSqrt(n, 1));
}
