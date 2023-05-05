#include "main.h"

/**
*clear_bit - sets the value of a bit to 0 at index
*@n: adress of number argument
*@index: index position
*Return: 1 (success), -1(failure)
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
    int num;

    if (index > 63)
    {
        return -1;
    }

    num = 1 << index;
    *n = ~*n;
    *n = *n | num;
    *n = ~*n;
    return 1;
}
