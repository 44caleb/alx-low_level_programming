#include <stdio.h>
#include "main.h"

/**
 * main - multiplies 2 command line inputs
 *@argc: number of arguments
 *@argv: array of arguments
 * Return: always (0) Success
 */

int main(int argc, char *argv[])
{
	int a = argv[1] * argv[2];

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", a);
	return (0);

}

