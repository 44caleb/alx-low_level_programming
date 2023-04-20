#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers followed by a string or separator.
 * @separator: String that separates numbers.
 * @n: Amount of numbers to be printed.
 * @...: variable number of arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int num = va_arg(args, int);

		printf("%d", num);

		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	printf("\n");

	va_end(args);
}

