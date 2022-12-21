#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string
 * @s: an input array of strings
 * Return: string
 */
char *cap_string(char *s)
{
	int num = 0, num2;

	while (s[num] != '\0')
	{
		num2 = num - 1;
		if (s[num] >= 'a' && s[num] <= 'z')
		{
			if (num == 0)
				s[num] -= 32;
			else if (s[num2] >= 9 && s[num2] <= 10)
				s[num] -= 32;
			else if (s[num2] >= 32 && s[num2] <= 34)
				s[num] -= 32;
			else if (s[num2] >= 40 && s[num2] <= 41)
				s[num] -= 32;
			else if (s[num2] == 46)
				s[num] -= 32;
			else if (s[num2] == 59)
				s[num] -= 32;
			else if (s[num2] == 123 || s[num2] == 125)
				s[num] -= 32;
		}
		num++;
	}
	return (s);
}
