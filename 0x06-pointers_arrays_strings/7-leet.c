#include "main.h"

/**
 * leet - a function that encodes a string into 1337
 * @s: an input string
 * Return: string
 */
char *leet(char *s)
{
	int num1, num2;
	char str1[] = "aetol";
	char str2[] = "AETOL";
	char num[] = "43701";

	num1 = num2 = 0;

	for (num1 = 0; s[num1] != '\0'; num1++)
	{
		for (num2 = 0; str1[num2] != '\0' && str2[num2] != '\0'; num2++)
		{
			if (s[num1] == str1[num2] || s[num1] == str2[num2])
				s[num1] = num[num2];
		}
	}
	return (s);
}
