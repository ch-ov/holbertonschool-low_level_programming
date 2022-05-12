#include "3-calc.h"

/**
 * main - Conditions and execution of program
 * @argc: Number of arguments passed
 * @argv: String of arguments
 * Return: int
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	int (*calc)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	calc = get_op_func(argv[2]);
	if (calc == NULL || argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", calc(num1, num2));
	return (0);
}
