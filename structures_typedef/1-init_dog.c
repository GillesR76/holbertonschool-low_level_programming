#include "dog.h"

/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: first member
 * @name: second member
 * @age: third member
 * @owner: fourth member
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
