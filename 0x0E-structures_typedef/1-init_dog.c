#include "dog.h"

/**
 * init_dog - It's a initializes a dog
 *@d: The dog to initialize
 *@name: The dog's name
 *@age: The dog's age
 *@owner: The owner's name
 *Return: Nothing to return
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
