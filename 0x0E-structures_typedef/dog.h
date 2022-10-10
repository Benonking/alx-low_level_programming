#ifndef DOG
#define DOG

/**
 * struct dog - dog name, age, owner
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */

struct dog (
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog; 
#endif
