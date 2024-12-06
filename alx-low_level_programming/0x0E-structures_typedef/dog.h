#ifndef DOG_H
#define DOG_H

/**
 * struct dog -> comprises dog features
 * @name: name of dog
 * @age: age of owner
 * @owner: owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

typedef dog dog_t;

int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
