#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog -  Function that frees the dogs.
 * @d: Variable of the structure to be freeded.
*/
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
