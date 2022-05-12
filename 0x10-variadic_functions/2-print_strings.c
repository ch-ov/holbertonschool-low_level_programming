#include "variadic_functions.h"
/**
 * print_strings - Write a function that prints strings.
 * @separator: String to be printed btwn strings.
 * @n: Number of strings passed to function.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	char *str;

	va_list ap;

	va_start(ap, n);
	for (x = 0; x < n; x++)
	{
		str = va_arg(ap, char*);
		if (str == NULL)
			printf("(nil)");
		if (str)
			printf("%s", str);
		if (x != (n - 1) && separator)
			printf("%s", separator);
	}
	printf("\n");

	va_end(ap);
}
