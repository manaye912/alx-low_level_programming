#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Function that prints a dog. That is, its name, age, and owner
 * @d: Contains a struct holding various variables
 * Return: Nothing
 */
void print_dog(struct dog *d)
{

	if (d != NULL)
	{
		if (d->name != NULL)
		{
			printf("Name: %s\n", d->name);
		}
		else
		{
			printf("Name: (nil)\n");
		}
		printf("Age: %f\n", d->age);
		if (d->owner != NULL)
		{
			printf("Owner: %s\n", d->owner);
		}
		else
		{
			printf("Owner: (nil)\n");
		}
	}
}
