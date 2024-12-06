#include <stdio.h>
/**
 * main -> entry point
 * @argc: program counts
 * @argv: array of prgaom [arameters
 * Return: integer
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
