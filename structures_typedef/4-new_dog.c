#include "dog.h"

/**
 * new_dog - function that creates a new dog
 * @name: first member
 * @age: second member
 * @owner: third member
 *
 * Return: return null if the function fails
 */
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

dog_t *new_dog(char *name, float age, char *owner)
{

	dog_t *ptr = malloc(sizeof(dog_t));

	if (ptr == NULL)
		return (NULL);

	ptr->name = _strdup(name);

	if (ptr->name == NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr->age = age;

	ptr->owner = _strdup(owner);

	if (ptr->owner == NULL)
	{
		free(ptr->name);
		free(ptr);
		return (NULL);
	}

	return (ptr);
}
