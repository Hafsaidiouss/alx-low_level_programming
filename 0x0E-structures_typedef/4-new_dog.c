#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * new_dog -  function that creates a new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *n;
	char *o;

	n = strdup(name);
	if (n == NULL)
		return (NULL);
	o = strdup(owner);
	if (o == NULL)
	{
		free(n);
		return (NULL);
	}
	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		free(o);
		free(n);
		return (NULL);
	}
	dog->name = n;
	dog->age = age;
	dog->owner = o;
	return (dog);
}
