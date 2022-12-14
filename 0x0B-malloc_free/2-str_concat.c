#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings
 * @s1: an input string
 * @s2: an input string
 * Return: 0 as success
 */
char *str_concat(char *s1, char *s2)
{
	char *string;
	int len1, len2, len3, n;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; *(s1 + len1) != '\0'; len1++)
		continue;

	for (len2 = 0; *(s2 + len2) != '\0'; len2++)
		continue;

	len3 = len1 + len2;

	string = (char *) malloc(len3 * sizeof(char) + 1);

	if (string == NULL)
		return (NULL);

	for (n = 0; n < len1; n++)
		string[n] = s1[n];

	for (n = 0; n < len2; n++)
		string[n + len1] = s2[n];

	return (string);
}
