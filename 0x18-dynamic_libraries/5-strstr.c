#include "main.h"
#include <stdio.h>

/**
 * _strstr -  a function that locates a substring.
 * @haystack: an input string
 * @needle: an input string to find haystack
 * Return:  a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *str1 = needle, *str2 = haystack;

	while (*haystack)
	{
		str2 = haystack;
		needle = str1;
		while (*haystack == *needle)
		{
			haystack++;
			needle++;
		}
		if (*needle == '\0')
			return (haystack);
		haystack = str2 + 1;
	}
	return (NULL);
}
