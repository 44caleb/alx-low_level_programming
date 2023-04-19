#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name of person
 * @f: pointer to function that actually prints the name
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
        f(name);
}
~
