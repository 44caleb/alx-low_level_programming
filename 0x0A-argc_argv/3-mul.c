#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - multiplies 2 command line inputs
 *@argc: number of arguments
 *@argv: array of arguments
 * Return: always (0) Success
 */

int main(int argc, char *argv[])
{
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);
	int c = a * b;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", c);
	return (0);

}

