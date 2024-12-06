#include "main.h"

/**
 * int print_last_digit - main entry of program
 * return last number
 *
 */

int print_last_digit(int n)
{
	int last;
	last = n% 10;

	if ( last <10 )
	{
		return (last * -1);
	}
		return (last);
}
