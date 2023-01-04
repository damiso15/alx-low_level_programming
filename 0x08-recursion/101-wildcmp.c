#include "main.h"

/**
 * wildcmp - a function that compares two strings and
 * returns 1 if the strings can be considered identical,
 * otherwise return 0
 * @s1: an input string
 * @s2: an input string
 * Return: 1 if string is identical and 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if (!*s1 && !*s2)
		return (1);
	else if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	else if (*s2 == '*' && (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2)))
		return (1);
	else if (*s2 == '*' && *(s1 + 1) && *s2)
		return (0);
	return (0);
}
