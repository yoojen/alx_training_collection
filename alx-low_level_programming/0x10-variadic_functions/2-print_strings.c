#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_strings -> print string
 * @separator: comma
 * @n: number string passed
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *sep, *cpy;
	va_list otherArgs;

	if (separator == NULL || *separator == 0)
		sep = "";
	else
		sep = (char *) separator;

	if (n <= 0)
		return;

	va_start(otherArgs, n);

	for (i = 0; i < n; i++)
	{

		if (i == n - 1)
			sep = "";
		cpy = va_arg(otherArgs, char *);
		if (cpy == NULL)
			cpy = "(nil)";
		printf("%s%s", cpy, sep);
	}

	putchar('\n');
	va_end(otherArgs);
}
