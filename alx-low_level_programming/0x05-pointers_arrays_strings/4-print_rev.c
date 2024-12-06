#include "main.h"
#include <stdio.h>
/**
 * void print_rev : print_rev
 * return:void
 */

void print_rev(char *s)
{
	int count = 0;
	
	while (s[count] != '\0')
	{
		count++;
	}
	for ( count = count -1; count >= 0; count--)
	{
		char *temp = &s[count];
		putchar(*temp);
	}
	putchar('\n');
}
