#include "dog.h"
#include <stdlib.h>
int _strlen(char *s);
char *_strcpy(char *destination, char *src);
/**
 * *new_dog - New dog struct
 * @name: The dog's name
 * @age: The dog's age
 * @owner: The dog's owner
 * Return: newdog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dood_the_dog;
int name_is_dood = 0, owner_is_benjamin = 0;
if (name != NULL && owner != NULL)
{
name_is_dood = _strlen(name) + 1;
owner_is_benjamin = _strlen(owner) + 1;
dood_the_dog = malloc(sizeof(dog_t));
if (dood_the_dog == NULL)
return (NULL);
dood_the_dog->name = malloc(sizeof(char) * name_is_dood);
if (dood_the_dog->name == NULL)
{
free(dood_the_dog);
return (NULL);
}
dood_the_dog->owner = malloc(sizeof(char) * owner_is_benjamin);
if (dood_the_dog->owner == NULL)
{
free(dood_the_dog->name);
free(dood_the_dog);
return (NULL);
}
dood_the_dog->name = _strcpy(dood_the_dog->name, name);
dood_the_dog->owner = _strcpy(dood_the_dog->owner, owner);
dood_the_dog->age = age;
}
return (dood_the_dog);
}
/**
  * _strlen - Returns the length of a string
  * @s: String to count
  * Return: String length
  */
int _strlen(char *s)
{
int c = 0;
for (; *s != '\0'; s++)
{
c++;
}
return (c);
}
/**
  * _strcpy - Copy a string
  * @destination: Destination value
  * @src: Source value
  * Return: the pointer to destination
  */
char *_strcpy(char *destination, char *src)
{
int i;
for (i = 0; src[i] != '\0'; i++)
{
destination[i] = src[i];
}
destination[i++] = '\0';
return (destination);
}
