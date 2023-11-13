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
	int i, len1 = 0, len2 = 0;
	dog_t *new_dog = NULL;

	while (name[len1] != '\0')
		len1++;
	while (owner[len2] != '\0')
		len2++;

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	new_dog->name = malloc((len1 + 1) * sizeof(char));

	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		new_dog->name[i] = name[i];
	}

	new_dog->age = age;
	new_dog->owner = malloc((len2 + 1) * sizeof(char));

	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	for (i = 0; i < len2; i++)
	{
		new_dog->owner[i] = owner[i];
	}
	return (new_dog);
}
