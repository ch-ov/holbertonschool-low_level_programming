#include "main.h"
#include <stdlib.h>
/**
 * str_concat - Concatenates two Strings
 * @s1: First String
 * @s2: Second String
 * Return: char*
 */
char *str_concat(char *s1, char *s2)
{
	int x, y;
	char *aux;

	if (s1 == NULL)
		s1 = "";
	for (x = 0; s1 && s1[x] != '\0'; x++)
	{
	}
	if (s2 == NULL)
		s2 = "";
	for (y = 0; s2 && s2[y] != '\0'; y++)
	{
	}
	aux = (char *)malloc((x + y + 1) * sizeof(char));
	if (aux == NULL)
		return (NULL);
	for (x = 0; s1[x] != '\0'; x++)
		aux[x] = s1[x];
	for (y = 0; s2[y] != '\0'; x++, y++)
		aux[x] = s2[y];
	aux[x] = '\0';
		return (aux);
}
