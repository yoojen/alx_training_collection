#include "main.h"

/**
 * factorial - return factorial of input
 * @n: input
 * Return: integer
 */
int factorial(int n)
{
	if (n == 0 || n == 1)
	{
		return (n);
	}
	if (n < 0)
	{
		return (-1);
	}

	return (n * factorial(n - 1));
}
