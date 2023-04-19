#include "3-calc.h"

/*
op_add - returns sum of a and b
@a: first number
@b: second number
Return: sum*/

int op_add(int a, int b)
{
    printf("%d\n", a + b);
    return (a + b);
}

/*
op_sub - returns difference of a and b
@a: first number
@b: second number
Return: difference*/

int op_sub(int a, int b)
{
    printf("%d\n", a - b);
    return (a - b);
}

/*
op_mul - returns product of a and b
@a: first number
@b: second number
Return: product*/

int op_mul(int a, int b)
{
    printf("%d\n", a * b);
    return (a * b);
}

/*
op_div - returns quotient of a and b
@a: first number
@b: second number
Return: quotient*/

int op_div(int a, int b)
{
    if (b == 0)
    {
        printf("Error\n");
        exit(100);
    }
     printf("%d\n", a / b);
    return (a / b);
}

/*
op_mod - returns modulus of a and b
@a: first number
@b: second number
Return: quotient*/

int op_mod(int a, int b)
{
    if (b == 0)
    {
        printf("Error\n");
        exit(100);
    }
    printf("%d\n", a % b);
    return (a % b);
}

