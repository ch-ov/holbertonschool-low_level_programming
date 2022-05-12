#include <stdio.h>
/**
 * main - Total of even numbers of Fibonacci series.
 * Return: void
 */
int main(void)
{
	int x, prev1 = 0, prev2 = 1, sum = 0, even = 0;

	for (x = 0; x <= 33; x++)
	{
		sum = prev1 + prev2;
		prev1 = prev2;
		prev2 = sum;
		if (sum % 2 == 0)
			even = even + sum;
	}
	printf("%d\n", even);
	return (0);
}
