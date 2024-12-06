#include "main.h"

/**
 * print_most_numbers - print most numbers
 * return: void
 */

void print_most_numbers(void)
{
	int i;

	for (; i <= 9; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		else
		{
			_putchar(i + '0');
		}
	}
		_putchar('\n');
}
