#include "main.h"

/**
*get_bit - returns the value of a bit at given index
*@n: number
*@index: index poisition
*Return: the value of the bit
*/

int get_bit(unsigned long int n, unsigned int index)
{
    unsigned int num;

    if (index > 63)
    {
        return -1;
    }

    num = n >> index;

    if (num & 1)
    {
        return 1;
    }
    return 0;
}
