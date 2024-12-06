#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) /* main function*/
{
	char a, e, q;
	e = 'e';
	
	q = 'q';
	for (a = 'a'; a <= 'z'; a++)
	{
		if (a != e && a != q)
		putchar(a);
	}
	putchar('\n');

	return (0);
}
