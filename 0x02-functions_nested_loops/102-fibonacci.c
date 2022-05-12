#include <stdio.h>
/**
 * main - fibonacci sequence until 50 numbers.
 * Return: 0
 */
int main(void)
{
	long int x, prev1 = 1, prev2 = 2, sum = 0;

	printf("%ld, %ld, ", prev1, prev2);
	x = 2;

	for (; x < 50; x++)
	{
		sum = prev1 + prev2;
		prev1 = prev2;
		prev2 = sum;
		if (x == 49)
			printf("%ld\n", sum);
		else
			printf("%ld, ", sum);
	}
	return (0);
}
