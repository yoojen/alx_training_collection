#include "main.h"

/**
 * primeChecker -> check for prime number
 * @num: number to check
 * @i: decrement as reminder is not 0
 * Return: prime number
 */

int primeChecker(int num, int i)
{
	if (i == 1)
		return (1);
	if (num % i == 0)
		return (0);
	else
		return (primeChecker(num, i - 1));
}

/**
 * is_prime_number -> return 1 if prime 0 if not prime
 * @n: number to check
 * Return: integer
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else if (primeChecker(n, n / 2) > 0)
		return (1);
	return (0);
}
