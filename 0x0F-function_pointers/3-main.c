#include "3-calc.h"

/*
main - carries out operations on 2 arguments
@argc: number of arguments
@argv: array of arguments
Return: value from the operation*/

int main(int argc, char *argv[])
{
    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[3]);
    char *operator = argv[2];
    int (*func)(int, int);

    if (argc != 4)
    {
        printf("Error\n");
        exit(98);
    }

    if (strcmp(operator, "+") != 0 && strcmp(operator, "-") != 0 &&
        strcmp(operator, "*") != 0 && strcmp(operator, "/") != 0 &&
        strcmp(operator, "%") != 0)
    {
        printf("Error\n");
        exit(99);
    }

    func = get_op_func(operator);
    return (func(num1, num2));

}
