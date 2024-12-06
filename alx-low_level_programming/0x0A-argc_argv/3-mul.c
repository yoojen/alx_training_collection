#include <stdio.h>
#include <stdlib.h>

/**
 * main -> entry
 * @argc: program counts
 * @argv: array of arguments
 * Return: integer
 */
int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		mul *= atoi(argv[i]);
	}
	printf("%d\n", mul);
	return (0);
}
