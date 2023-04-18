#include "dog.h"
#include <stdio.h>

/**
 * print_dog - A function that print a struct dog
 *@d: A pointer to struct dog (to print)
 *Return: Nothing to return
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: ");
		d->name == NULL ? printf("(nil)\n") : printf("%s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: ");
		d->owner == NULL ? printf("(nil)\n") : printf("%s\n", d->owner);
	}
}
