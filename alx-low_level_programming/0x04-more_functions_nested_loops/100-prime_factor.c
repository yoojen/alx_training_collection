#include <stdio.h>
#include <math.h>

/**
* main - entry of program
* return: 0 success
*/

int main(void)
{
	long i, maxNum;
	long num = 612852475143;
	double sqr = sqrt(num);

	for (i = 1; i <= sqr; i++)
	{
		if (num % i == 0)
		{
			maxNum = num / i;
		}
	}
	printf("%ld\n", maxNum);
	return (0);
}
