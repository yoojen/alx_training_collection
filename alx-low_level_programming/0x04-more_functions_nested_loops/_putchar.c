#include <unistd.h>
#include "main.h"
/**
 * _putchar: writes the character c to stdout
 * @<: the character to print
 * Return: on success 1
 * On error: -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
