#include "main.h"

/**
 * more_numbers - more numbers
 * return: void
 */

void more_numbers(void)
{
	int j, k = 14, i;

	for (i = 1; i < 10; i++)
	{
		for (j = 0; j <= k; j++)
		{
			if (j > 9)
			{
				_putchar((j / 10) + '0');
			}
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
