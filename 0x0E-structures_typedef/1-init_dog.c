#include "dog.h"
/**
 *init_dog -  initialize a variable of type struct dog
 *@d: dog identity
 *@name: name of dog
 *@age:age of the dog
 *@owner: owner of dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
