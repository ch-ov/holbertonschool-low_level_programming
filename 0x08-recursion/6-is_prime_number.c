#include "main.h"
/**
 * _new_prime - Calculates if input integer is a prime number
 * @n: Number to be evaluated
 * @y: Number of iterations
 * Return: int
 */
int _new_prime(int n, int y)
{
	if (y == 1)
		return (1);
	if (n % y == 0)
		return (0);
	return (_new_prime(n, y - 1));
}
/**
 * is_prime_number - Determines whether a number is prime or not.
 * @n: Number to be evaluated
 * Return: int
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_new_prime(n, n - 1));
}
