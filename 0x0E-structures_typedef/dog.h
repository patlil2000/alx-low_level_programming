#ifndef DOG_H
#define DOG_H
/**
 *struct dog - describes a dog
 *@age: First member
 *@name: Second member
 *@owner: Third member
 *
 * Description: This is a structure that describes
 * a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 *dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;
#endif /* DOG_H*/
