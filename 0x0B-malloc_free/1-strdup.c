#include "main.h"
#include <stdlib.h>

/**
 * _strdup - a function that returns a pointer to a newly
 * allocated space in memory, which contains a copy of the
 * string given as a parameter
 * @str: the input char array
 * Return: 0 as (Success)
 */
char *_strdup(char *str)
{
	int len = 0, n = 0;
	char *st;

	if (str == NULL)
	{
		return (NULL);
	}

	while (*(str + len) != '\0')
	{
		len++;
	}

	st = malloc(sizeof(char) * len + 1);

	if (st != NULL)
	{
		for (; n < len; n++)
		{
			st[n] = str[n];
		}
		st[n] = '\0';
		return (st);
	}
	else
	{
		return (NULL);
	}
}
