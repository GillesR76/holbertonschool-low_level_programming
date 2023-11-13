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
	int len1 = 0, len2 = 0;

	while (name[len1] != '\0')
		len1++;
	while (owner[len2] != '\0')
		len2++;

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	new_dog->name = malloc(len1 * sizeof(char) + sizeof(char));
	
	if (new_dog->name == NULL)
	{
		free(new_dog->name);
		return (NULL);
	}
	new_dog->age = age;
	
	new_dog->owner = malloc(len2 * sizeof(char) + sizeof(char));
	
	if (new_dog->owner == NULL)
	{
		free(new_dog->owner);
		return (NULL);
	}
	free(new_dog);

	return (new_dog);
}
