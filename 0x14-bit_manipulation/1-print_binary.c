#include "main.h"

/**
 * print_binary - prints binary representation of a number
 * @n: number to be converted
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
    int i, num, one_present = 0;

    if (n == 0)
    {
        _putchar('0');
        return;
    }

    for (i = 63; i >= 0; i--)
    {
        num = n >> i;

        if (num & 1)
        {
            _putchar('1');
            one_present = 1;
        }
        else if (one_present)
        {
            _putchar('0');
        }
    }
}

