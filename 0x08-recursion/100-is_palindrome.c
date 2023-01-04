#include "main.h"

/**
 * _strlength - a function that returns the length of a string
 * @s: an input string
 * Return: the length of the string
 */
int _strlength(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlength(s + 1));
}

/**
 * _is_reverse - a function that compares strings
 * @s: an input string
 * @l: an input integer of the length
 * Return: a matching string
 */
int _is_reverse(char *s, int l)
{
	if (l <= 1)
		return (1);
	else if (*s == *((l - 1) + s))
	{
		return (_is_reverse(s + 1, l - 2));
	}
	else
		return (0);

}

/**
 * is_palindrome - a function that returns 1 if a string
 * is a palindrome and 0 if not
 * @s: an input string
 * Return: 1 if the string is a palindrome or 0 otherwise
 */
int is_palindrome(char *s)
{
	int l = _strlength(s);

	if (l <= 1)
		return (1);
	return (_is_reverse(s, l));
}
