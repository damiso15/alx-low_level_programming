#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - a function that concatenates two strings
 * @s1: an input string
 * @s2: an input string
 * Return: 0 as (Success)
 */

char *str_concat(char *s1, char *s2)
{
	int len, n, i;
	char *str, c, d;
	int a = 0;

	while (s1[a] != '\0')
		a++;

	for (i = 0; i < a && s2[i] != '\0'; i++)
	{
		d = s1[a + i];
		c = s2[i];
		d = c;
	}
	d = '\0';
	printf("%d\n", d);

	if (s1 == NULL)
	{
		return (NULL);
	}

	len = 0;
	while (*(s1 + len) != '\0')
	{
		len++;
	}

	str = malloc(sizeof(char) * len + 1);

	n = 0;
	if (str != NULL)
	{
		for (; n < len; n++)
		{
			str[n] = s1[n];
		}
		str[n] = '\0';
		return (str);
	}
	else
	{
		return (NULL);
	}
}
