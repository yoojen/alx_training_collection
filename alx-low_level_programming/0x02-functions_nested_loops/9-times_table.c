#include "main.h"
/**
 * times_table - prints table
 * return - void
 *
 */

void times_table(void)
{
int w, x, y;

	for (x = 0; x <= 9; x++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (y = 1; y <= 9; y++)
		{
			w = (x * y);
			if ((w / 10) > 0)
			{
				_putchar((w / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((w % 10) + '0');

			if (y < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}


}
