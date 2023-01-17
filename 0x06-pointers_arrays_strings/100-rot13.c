#include "main.h"

/**
 * rot13 - a function that encodes a string using rot13.
 * @s: an input string
 * @Return: string
 */
char *rot13(char *s)
{
	int num1, num2;

	char str1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char str2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (num1 = 0; s[num1]; num1++)
	{
		for (num2 = 0; str1[num2]; num2++)
		{
			if (s[num1] == str1[num2])
			{
				s[num1] = str2[num2];
				break;
			}
		}
	}
	return (s);
}
