#include "function_pointers.h"

/**
 * print_name -> print name entered by first functin
 * @name: name to print from another functin
 * @f: functio pinter
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	if (!f)
		return;
	f(name);
}
