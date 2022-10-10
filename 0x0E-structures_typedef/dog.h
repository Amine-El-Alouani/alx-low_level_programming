#ifndef DOG_STRUCT
#define DOG_STRUCT

/**
 * struct dog - struct
 * @name: var
 * @age: var
 * @owner: var
 * Return: value
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
