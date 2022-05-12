#include "variadic_functions.h"
/**
 * print_numbers - Function that prints numbers
 * @separator: String to be printed
 * @n: Number of integers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x;

	va_list ap;

	va_start(ap, n);
	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(ap, int));
		if (x != (n - 1) && separator)
			printf("%s", separator);
	}
	printf("\n");

	va_end(ap);
}
