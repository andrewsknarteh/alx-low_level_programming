#ifndef DOG_H_FILE
#define DOG_H_FILE

/**
 * struct dog - defines dog structure
 * @name: dog's name
 * @age: dog's age
 * @ownwe: owner name
 */
typedef struct dog
{
	char *name;
	float age;
	char *ownwe;
}dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
