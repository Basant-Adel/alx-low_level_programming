#include "dog.h"
#include <stdio.h>

/**
 * print_dog -A function that print a struct dog
 *@d: A pointer to struct dog (to print)
 *Return: Nothing to return
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n ", d->name ? d->name : "(nil)";
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
