#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all -> sums all params
 * @n: mandatory param
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list otherArgs;

	if (n == 0)
		return (0);

	va_start(otherArgs, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(otherArgs, const unsigned int);
	}
	va_end(otherArgs);
	return (sum);
}
