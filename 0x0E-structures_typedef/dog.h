#ifndef Macro_dog
#define Macro_dog
/**
 * struct dog - Elementos of dog.
 * @name: Dog name.
 * @age: Dog age.
 * @owner: Dog owner.
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - New elements dog.
 * @name: Dog name.
 * @age: Dog age.
 * @owner: Dog owner.
 * @d: data.
*/
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
