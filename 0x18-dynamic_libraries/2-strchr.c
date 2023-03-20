#include "main.h"
#include <stdio.h>

/**
 * _strchr - a function that locates a character in a string
 * @s: an input string
 * @c: an input character to search
 * Return: a pointer to the first occurrence of the character
 * c in the string s, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int n = 0;

	for (; *(s + n) != '\0'; n++)
	{
		if (*(s + n) == c)
		{
			return (s + n);
		}
	}
	if (c == '\0')
	{
		return (s + n);
	}
	return (NULL);
}
