#include "dog.h"
/**
 * init_dog - initializes a type struct dog.
 * @d: The dog structure
 * @name: pointer to chars of the dog's name
 * @age: Age of the dog
 * @owner: pointer to char of the dog's owner
 * Return: Nothing.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
