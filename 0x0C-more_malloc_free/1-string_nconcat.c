#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - Concatenates two strings.
 * @s1: First String to be concatenated.
 * @s2: Second String to be concatenated.
 * @n: Counter for the string.
 * Return: newchar.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k, l;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		continue;
	for (j = 0; s2[j] != '\0'; j++)
		continue;
	if (n >= j)
		n = j;
	concat = malloc(sizeof(char) * (i + n + 1));
	if (concat == NULL)
		return (NULL);
	for (k = 0; s1[k] != '\0'; k++)
		concat[k] = s1[k];

	for (l = i; l < i + n; l++)
		concat[l] = s2[l - i];
	concat[l] = '\0';
	return (concat);
}
