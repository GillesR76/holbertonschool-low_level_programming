#include "dog.h"

/**
 * print_dog - function that prints a structure
 * @d: pointer to structure
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->owner == NULL)
		printf("nil");

	if (d->name == NULL)
		printf("Name: (nil)");

	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
