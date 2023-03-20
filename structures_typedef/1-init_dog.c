#ifndef DOG_H
#define DOG_H
/**
 * init_dog - function
 * @name: name
 * @owner: owner
 * @age: age
 * @d: struct
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if(d)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
