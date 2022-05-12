#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - Creates a new dog.
 * @name: Pointer to name of the dog.
 * @age: Age of the dog.
 * @owner: Pointer to owner of the dog.
 * Return: pointerOne.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	int countNam;
	int countOwn;
	dog_t *pointerOne;
	int x;
	int y;

	pointerOne = malloc(sizeof(dog_t));
	if (pointerOne == NULL)
		return (NULL);
	for (countNam = 0; name[countNam]; countNam++)
		;
	for (countOwn = 0; owner[countOwn]; countOwn++)
		;
	pointerOne->name = malloc(sizeof(pointerOne->name) * countNam);
	if (pointerOne->name == NULL)
	{
		free(pointerOne);
		return (NULL);
	}
	for (x = 0; x <= countNam; x++)
		pointerOne->name[x] = name[x];
	pointerOne->age = age;
	pointerOne->owner = malloc(sizeof(pointerOne->owner) * countOwn);
	if (pointerOne->owner == NULL)
	{
		free(pointerOne->name);
		free(pointerOne);
		return (NULL);
	}
	for (y = 0; y <= countOwn; y++)
		pointerOne->owner[y] = owner[y];
	return (pointerOne);

}
