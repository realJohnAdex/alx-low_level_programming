#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a pretty little dog
 * @name: name
 * @age: age
 * @owner: owner of dog
 *
 * Description: what a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */