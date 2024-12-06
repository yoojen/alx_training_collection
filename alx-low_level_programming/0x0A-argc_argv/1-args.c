#include <stdio.h>

/**
 * main -> print argument count
 * @argc: prograom counts
 * @argv: argument array
 * Return: integer
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
