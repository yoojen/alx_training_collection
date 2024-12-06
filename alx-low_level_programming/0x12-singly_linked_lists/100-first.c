#include <stdio.h>
#include <stdlib.h>

/**
 * starter -> print before main
 */
void __attribute__ ((constructor)) starter()
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
