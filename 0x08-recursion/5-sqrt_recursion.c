#include "main.h"
/**
 * _new_recursion - Returns the natural square of a number
 * @n: Number to be evaluated
 * @y: Number of iterations
 * Return: int
 */
int _new_recursion(int n, int y)
{
	if (y * y == n)
		return (y);
	if (y * y > n)
		return (-1);
	return (_new_recursion(n, y + 1));
}
/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: Number to be evaluated
 * Return: int
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_new_recursion(n, 0));
}
