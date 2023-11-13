#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - Structure named dog
 * @name: First member
 * @age: Second member
 * @owner: Second member
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog dog_t;

char *_strdup(char *str);
dog_t *new_dog(char *name, float age, char *owner);

#endif
