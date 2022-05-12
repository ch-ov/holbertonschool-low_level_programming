#include <stdio.h>
/**
 * main - Fibonacci sequence until 98 numbers.
 * Return: 0
 */
int main(void)
{
	float x, prev1 = 1, prev2 = 2, sum = 0;

	printf("%.f, %.f, ", prev1, prev2);
	x = 2;

	for (; x < 98; x++)
	{
		sum = prev1 + prev2;
		prev1 = prev2;
		prev2 = sum;
		if (x == 97)
			printf("%.f\n", sum);
		else
			printf("%.f, ", sum);
	}
	return (0);
}
