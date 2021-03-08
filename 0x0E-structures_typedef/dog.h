#ifndef HEADER_FILE
#define HEADER_FILE

/**
 * struct dog - a struct data type for a dog
 * @name: name of a dog
 * @age: age of a dog
 * @owner: owner name of the dog
 *
 * Description: a dog struct data type contain name, age and owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
