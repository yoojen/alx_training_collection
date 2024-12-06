#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers -> print number
 * @separator: coma to separate
 * @n: number of elements
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *sep;
	va_list otherArgs;

	if (separator == NULL || *separator == 0)
		sep = "";
	else
		sep = (char *) separator;

	if (n <= 0)
		return (NULL);

	va_start(otherArgs, n);

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
			sep = "";
		printf("%d%s", va_arg(otherArgs, int), sep);
	}
	putchar('\n');
	va_end(otherArgs);
}
