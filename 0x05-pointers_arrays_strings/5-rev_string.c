#include "main.h"

/**
 * rev_string - a function that reverses a string.
 * @s: an input string
 * Return: nothing
 */
void rev_string(char *s)
{
	int len = 0, rev = 0;
	char str;

	for (; s[len] != '\0' ; )
	{
		len++;
	}

	for (; rev < len--; )
	{
		str = s[rev];
		s[rev++] = s[len];
		s[len] = str;
	}
}
