#include "main.h"
#include <stdio.h>

/**
 * void _puts : prints string
 * return : void
 *
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
