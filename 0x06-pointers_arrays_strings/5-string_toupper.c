#include "main.h"

/**
 * string_toupper - a function that changes all lowercase letters of a string to uppercase
 * @s: input array string
 * Return: string 
 */
char *string_toupper(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		if (s[len] >= 'a' && s[len] <= 'z')
			s[len] -= 32;
		len++;
	}
	return (s);
}
