#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initializes a variable of type struct dog
 * Description: This function inits a struct dog variable with the provided
 * name, age, and owner values. takes a pointer to the struct dog variable as
 * its parameter and assigns the values to the members of the structure.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
	d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;

}
