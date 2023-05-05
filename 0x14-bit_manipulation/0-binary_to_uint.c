#include "main.h"

/**
 * binary_to_uint - converts binary numbers to unsigned ints
 * @b: character string of numbers to be converted
 * Return: converted number, 0 if string is not 0 or 1
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int len = 0;
	unsigned int sum = 0;
	const char *str = b;
	unsigned int exp;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);

		b++;
		len++;
	}

	while (*str != '\0')
	{
		exp = (*str - '0') << (len - 1);
		sum = sum + exp;

		str++;
		len--;
	}

	return (sum);
}

