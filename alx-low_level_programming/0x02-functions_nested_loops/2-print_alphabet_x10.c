#include "main.h"

/**
 * print_alphabet_x10 - ten times
 * Return: void
 */

void print_alphabet_x10(void)
{
	char start, end = 'z';
	int i;

	for (i = 0; i < 10; i++)
	{
		for (start = 'a'; start <= end; start++)
		{
			_putchar(start);
		}
		_putchar('\n');
	}
}
