#include "dog.h"

/**
 * _strdup - function that returns a pointer to a new space in memory
 * @str: string
 *
 * Return: pointer to the duplicted string
 */

char *_strdup(char *str);

char *_strdup(char *str)
{
	char *copy = NULL;
	int i;
	int len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	copy = malloc(len * sizeof(char) + sizeof(char));

	if (copy == NULL)
		exit(1);

	for (i = 0; i < len; i++)
	{
		copy[i] = str[i];
	}

	return (copy);
}

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

	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	new_dog->name = _strdup(name);

	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->age = age;

	new_dog->owner = _strdup(owner);

	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	return (new_dog);
}
