#include "variadic_functions.h"
/**
 * print_all - Function that prints anything
 * @format: String to be used
 */
void print_all(const char *const format, ...)
{
	int x = 0;
	char *comma = "";
	char *str;

	va_list ptr;

	va_start(ptr, format);
	if (format)
	{
		while (format[x])
		{
			switch (format[x])
			{
			case 'c':
				printf("%s%c", comma, va_arg(ptr, int));
				break;
			case 'i':
				printf("%s%d", comma, va_arg(ptr, int));
				break;
			case 'f':
				printf("%s%f", comma, va_arg(ptr, double));
				break;
			case 's':
				str = va_arg(ptr, char *);

				if (str == NULL)
					str = "(nil)";
				printf("%s%s", comma, str);
				break;
			default:
				x++;
				continue;
			}
			x++;
			comma = ", ";
		}
	}
	printf("\n");

	va_end(ptr);
}
