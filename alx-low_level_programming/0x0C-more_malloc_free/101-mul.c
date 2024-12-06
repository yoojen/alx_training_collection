#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main -> entry
 * @argc: arguments counts
 * @argv: arguments vector
 * Return: 0 - success
 */

int main(int argc, char *argv[])
{

	int i, mul;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		exit(98);
	}

	for (i = 0; i < argc; i++)
	{
		if (!(atoi(argv[i])))
		{
			printf("%s\n", "Error");
			exit(98);				}
		}
	}

	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mul);

	return (0);
}
