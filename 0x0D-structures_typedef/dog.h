#ifndef DOG
#define DOG
/**
 *struct dog - structure for a dog
 *@name: name of the dog
 *@age: age of the dog
 *@owner: owner of the do
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif

#ifndef _DOG_
#define _DOG_
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
