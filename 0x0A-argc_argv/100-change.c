#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *main - finds minimum number of coins for change
 *@argc: argument count
 *@argv: argument array
 *Return: always 0 Success
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	int money = atoi(argv[1]);
	int quarter = money / 4;
	int dime = (money % 4) / 10;
	int nickel = ((money % 4) % 10) / 5;
	int penny = ((money % 4) % 10) % 5;

	int coins = quarter + dime + nickel + penny;

	printf("%d\n", coins);
	return (0);
}
