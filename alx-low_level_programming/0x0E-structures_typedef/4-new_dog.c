#include "dog.h"
#include <stdlib.h>

/**
 * new_dog -> creates new dog
 * @name: name
 * @age: age
 * @owner: ownerr
 * Return: Pointer to new memory
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;
	char *rs;
	int i;

	if (name == 0 || owner == 0)
		return (NULL);

	newDog = malloc(sizeof(dog_t));
	if (!newDog)
		return (NULL);
	for (i = 1; rs = name, *rs; i++)
		rs++;
	newDog = malloc(i);
	if (!newDog)
	{
		free(newDog);
		return (NULL);
	}
	for (i = 1; rs = owner, *rs; i++)
		rs++;
	newDog->name = malloc(i);
	if (!newDog)
	{
		free(newDog);
		free(newDog->name);
		return (NULL);
	}
	for (i = 0; *name != 0; i++, name++)
		newDog->name[i] = *name;
	newDog->name[i] = 0;
	for (i = 0; *owner != 0; i++)
		newDog->owner[i] = *owner++;
	newDog->owner[i] = 0;
	newDog->age = age;

	return (newDog);
}
