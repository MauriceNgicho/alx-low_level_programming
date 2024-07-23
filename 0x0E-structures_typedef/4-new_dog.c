#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Create a new dog.
 * @name: Pointer to the dog's name.
 * @age: Float representing the dog's age.
 * @owner: Pointer to the dog's owner.
 *
 * Return: Pointer to the new dog_t struct, or NULL if the function fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	/* Allocate mem to the new dog */
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	/* Aloccate mem and cp name */
	new_dog->name = malloc(strlen(name) + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	strcpy(new_dog->name, name);

	/* Allocate mem and cp owner */
	new_dog->owner = malloc(strlen(owner) + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	strcpy(new_dog->owner, owner);

	new_dog->age = age;

	return (new_dog);

}
