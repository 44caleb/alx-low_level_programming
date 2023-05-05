#include "main.h"

/**
*set_bit - sets value of a bit to 1 at index
*@n: address of number
*@index: index position
*Return: 1 (success), -1 (failure)
*/

int set_bit(unsigned long int *n, unsigned int index)
{
    int num = 1;

    if (index > 63)
    {
        return -1;
    }

    num = 1 << index;
    *n = *n | num;
    return 1;
}
