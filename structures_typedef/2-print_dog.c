#include <stdlib.h>
#include "dog.h"
#include <stdio.h>
/**
 * print_dog function
 * @name: name
 * @owner: owner
 * @age: age
 * @d: struct
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name == NULL && d->owner == NULL)
		{
			d->name = "(nil)";
			d->owner = "(nil)";
		}
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
