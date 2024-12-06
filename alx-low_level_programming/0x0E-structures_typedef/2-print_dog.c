#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog -> print dog
 * @d: pinter to struct dog
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name == NULL)
			d->name = "(nil)";
		if (d->owner == NULL)
			d->owner = "(nil)";
		if (d->age <= 0)
			printf("Age: (nil)\n");

		printf("Name: %s\n", d->name);
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
