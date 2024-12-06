#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
* print_all -> print everything passed as argument
* @format: initial args to be passed
* Return: nothing
*/

void print_all(const char * const format, ...)
{
	int i = 0, x = 0;
	char *sep, *cpy;
	va_list args;

	sep = ", ";

	while (format && format[i])
		i++;
	va_start(args, format);

	while (*format && format[x])
	{
		if (x == i - 1)
			sep = "";
		switch (format[x])
		{
			case 'c':
				printf("%c%s", va_arg(args, int), sep);
				break;
			case 'i':
				printf("%d%s", va_arg(args, int), sep);
				break;
			case 'f':
				printf("%f%s", va_arg(args, double), sep);
				break;
			case 's':
				cpy = va_arg(args, char *);
				if (!cpy)
					cpy =  "(nil)";
				printf("%s%s", cpy, sep);
				break;
		}
	x++;
	}
	va_end(args);
	putchar('\n');
}
