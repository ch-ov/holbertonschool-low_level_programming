#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: Number of parameters
 * Return: An integer, in this case sum.
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int x;
	int sum = 0;

	va_start(args, n);
	for (x = 0; x < n; x++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
