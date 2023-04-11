#include <stdio.h>
#include "main.h"

/**
 *main - program that prints its own name
 *@argc: number of arguments
 *@argv: array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc__attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
