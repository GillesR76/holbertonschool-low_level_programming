#include "dog.h"

/**
 * new_dog - function that creates a new dog
 * @name: first member
 * @age: second member
 * @owner: third member
 *
 * Return: return null if the function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = NULL;

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;

	return (new_dog);
}
