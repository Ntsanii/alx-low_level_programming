#ifndef _DOG_H
#define _DOG_H
/**
 * struct dog - a struct that creates dog info
 * @name: name of the dog
 * @owner: owner of the dog
 * @age: age of the dog
 *
 * Description: first struct with alx
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
