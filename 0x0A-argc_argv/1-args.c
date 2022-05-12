#include <stdio.h>
#include "main.h"
/**
 * main - Prints the number of arguments passed into it.
 * @argc: Counter of the arguments.
 * @argv: Array of pointer to characters.
 * Return: Always 0.
*/
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%i\n", argc - 1);
	return (0);
}
