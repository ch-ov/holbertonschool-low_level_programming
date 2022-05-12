#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * main - Prints all arguments it receives.
 * @argc: Counter of the arguments.
 * @argv: Array of pointer to characters.
 * Return: Always 0.
*/
int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
