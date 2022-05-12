#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * main - Multiplies two numbers.
 * @argc: Counter of the arguments.
 * @argv: Array of pointer to characters.
 * Return: Always 0.
*/
int main(int argc, char *argv[])
{
	int number1;
	int number2;
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	number1 = atoi(argv[1]);
	number2 = atoi(argv[2]);
	mul = number1 * number2;

	printf("%d\n", mul);
	return (0);
}
