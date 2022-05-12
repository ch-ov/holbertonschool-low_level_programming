#include <stdio.h>
#include "main.h"
/**
 * main - Prints name of program, followed by a new line.
 * @argc: Counter of the arguments.
 * @argv: Array of pointers to characters.
 * Return: Always 0.
*/
int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);
	return (0);
}
