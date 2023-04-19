#include "function_pointers.h"

/*
array_iterator - executes a function given as a parameter on each element of array
@size: size of the array
@action: pointer to function to be used
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
    long unsigned int i;
    for (i = 0; i < size; i++)
    {
        action(array[i]);
    }
}
