#include "main.h"

/**
 * print_alphabet - print letters
 * Return: void
 *
 */
void print_alphabet(void)
{
	char start, end = 'z';

	for (start = 'a'; start <= end; start++)
	{
		_putchar(start);
	}
	_putchar('\n');
}
