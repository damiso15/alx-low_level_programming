#include "main.h"

/**
 * _strspn - a funstion that gets the length of a prefic substring
 * @s: an input string
 * @accept: an input character to find s
 * Return: the number of bytes in the initial segment of s which
 * consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int counter = 0, mark;
	char *str = accept;

	while (*s)
	{
		mark = 0;
		while (*accept)
		{
			if (*accept == *s)
			{
				counter++;
				mark = 1;
				break;
			}
			accept++;
		}
		s++;
		accept = str;
		if (mark == 0)
			break;
	}
	return (counter);
}
