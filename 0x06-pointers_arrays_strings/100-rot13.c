#include "main.h"

/**
 * rot13 - a function that encodes a string using rot13.
 * @s: an input string
 * @Return: string
 */
char *rot13(char *s)
{
	int num = 0;

	for (; s[num] != '\0'; num++)
	{
		for (; (s[num] >= 'a' && s[num] <= 'z') || (s[num] >= 'A' && s[num] <= 'Z'); num++)
		{
			if ((s[num] >= 'a' && s[num] <= 'm') || (s[num] >= 'A' && s[num] <= 'M'))
				s[num] += 13;
			else
				s[num] -= 13;
		}
	}
	return (s);
}
