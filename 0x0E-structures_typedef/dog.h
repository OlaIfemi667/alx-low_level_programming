#ifndef DOG_H
#define DOG_H
/**
 * struct dog - a data type named dog
 * @name: nom
 * @age: son age
 * @owner: propriétaire
 * Description : create a dog identity
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog snoop_dog;
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
