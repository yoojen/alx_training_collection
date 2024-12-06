#include "main.h"

/**
 * print_square - print square
 * return void
 * @size: parameter
 */

void print_square(int size)
{
	int count;
	int start;
	int end;

	end = size;
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (count = 0; count < end; count++)
		{
			for (start = 0; start <= end; start++)
			{
				_putchar('#');
			}
		_putchar('\n');
		}
	}
}
