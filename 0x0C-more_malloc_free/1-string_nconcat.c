#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - a function that concatenates two strings
 * @s1: an input string
 * @s2: an input string
 * @n: an input integer
 * Return: a pointer that point to the newly allocate space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *string;
	unsigned int len1, len2, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1]; len1++)
		continue;

	for (len2 = 0; s2[len2] && len2 < n; len2++)
		continue;

	string = malloc(len1 + n + 1);

	if (string == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		string[i] = s1[i];
	}

	for (i = 0; i < len2; i++)
		string[i + len1] = s2[i];

	string[i + len1] = '\0';
	return (string);
}
