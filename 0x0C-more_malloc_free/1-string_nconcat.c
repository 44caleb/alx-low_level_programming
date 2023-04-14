#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates 2 strings
 * @s1: first string
 * @s2: second string
 * @n: length of second string
 * Return: pointer to concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	if (s1 == NULL)
	{
		s1 = " ";
	}

	if (s2 == NULL)
	{
		s2 = " ";
	}
	
	int len2;
	if (n >= strlen(s2))
	{
		len2 = strlen(s2);
	}
	
	int len1 = strlen(s1);
	len2 = n;
	char *ptr = malloc(len1 + len2 + 1);
	int i;
	int end = 0;

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		ptr[i] = s1[i];
		end++;
	}

	for (i = 0; i < len2; i++)
	{
		ptr[end] = s2[i];
		end++;
	}	
	ptr[end + 1] = '\0';
	return (ptr);

}
