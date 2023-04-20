#include "variadic_functions.h"

/**
 * sum_them_all - Sums all its arguments.
 * @n: Number of arguments to sum.
 * @...: variable number of numbers
 * Return: Sum of all arguments.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum = 0;

	va_start(args, n);

	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		int num = va_arg(args, int);

		sum += num;
	}

	va_end(args);

	return (sum);
}

