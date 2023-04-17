#include "dog.h"

/**
 * init_dog - iniitializes the struct dog
 *@d: adress of the dog struct variable
 *@name: name of dog
 *@age: dog age
 *@owner: dog owner
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
