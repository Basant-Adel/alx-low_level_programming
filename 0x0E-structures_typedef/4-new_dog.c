#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - A function that gets a length of string
 *@str: The string to get the length
 *Return: Length of @str
 */

int _strlen(const char *str)
{
	int length = 0;

	while (*str++)
		length++;
	return (length);
}

/**
 * _strcopy - A function that returns @dest with a copy of a string from @src
 *@src: String to copy
 *@dest: Copy string to here
 *Return: @dest
 */

char *_strcopy(char *dest, char *src)
{
	int b;

	for (b = 0; src[b]; b++)
		dest[b] = src[b];
	dest[b] = '\0';

	return (dest);
}

/**
 * new_dog - A function that creates a new dog
 *@name: Name of dog
 *@age: Age of dog
 *@owner: Dog owner
 *Return: Struct pointer dog (NULL if function fails)
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

/* IF name and owner are empty and age is less than zero return null */
	if (!name || age < 0 || !owner)
		return (NULL);

	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*dog).owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->name = _strcopy(dog->name, name);
	dog->age = age;
	dog->owner = _strcopy(dog->owner, owner);

	return (dog);
}
