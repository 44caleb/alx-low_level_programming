#include "3-calc.h"

/*get_op_func - returns the pointer to the function that corresponds to the operator given as parameter
@s: operator
Return: pointer to required function
*/

int (*get_op_func(char *s))(int, int)
{
       op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i = 0;

    while (ops[i].op != NULL)
    {
        if (strcmp(s, ops[i].op) == 0)
        {
            return ops[i].f;
        }
        i++;
    }
    return NULL;
}
