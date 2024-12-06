#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[])
{
	int coins, cents;
	coins = 0;
	argc = 1;
	cents = atoi(argv[argc]);
 
	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}

	while (cents > 0)
	{
		coins++;

		if (cents - 25 >= 0)
		{
			cents -= 25;
			continue;
		}
		if (cents - 10 >= 0)
		{
			cents -= 10;
			continue;
		}
		if (cents - 5 >= 0)
		{
			cents -= 5;
			continue;
		}
		if (cents - 2 >= 0)
		{
			cents -= 2;
			continue;
		}
		cents--;
	}
	printf("%d\n", coins);

	return (0);
}
