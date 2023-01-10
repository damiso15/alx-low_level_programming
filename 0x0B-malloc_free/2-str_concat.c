#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings
 * @s1: an input string
 * @s2: an input string
 * Return: 0 as (Success)
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2, len3, i;
	char *str, a, b;

	if (s1 == NULL && s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}

	for (len1 = 0; *(s1 + len1) != '\0'; len1++)
	{
		continue;
	}

	for (len2 = 0; *(s2 + len2) != '\0'; len2++)
	{
		continue;
	}
	len3 = len1 + len2;

	str = malloc(sizeof(char) * (len3) + 1);

	if (str == NULL)
		return (NULL);

	while (i < len1)
	{
		a = str[i];
		b = s1[i];
		a = b;
		i++;
	}
	while (i < len2)
	{
		str[i + len1] = s2[i];
		i++;
	}

	return (str);
}
