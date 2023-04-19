#include "function_pointers.h"

/*
int_index - searches for an integer value
@array - array of arguments to be used in the function
@size - size of array
@cmp - pointer to function to be used ot compare values*/

int int_index(int *array, int size, int (*cmp)(int))
{
    int i;

    if (size <= 0)
    {
        return -1;
    }

    for (i = 0; i < size; i++)
    {
        int value = cmp(array[i]);

        if (value == 1)
        {
            return i;
        }
    }
    return -1;
}
