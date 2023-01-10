#include "main.h"
#include <stdlib.h>

/**
 * argstostr -  function that concatenates all the arguments of your program
 * @ac: input argument counter
 * @av: input argument value
 * Return: a pointer to a new string or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int len, n, m, o;
	char *str;

	if (ac <= 0 || av == NULL)
		return (NULL);

	len = 0, n = 0;

	for (; n < ac; n++)
	{
		for (m = 0; av[n][m]; m++)
		{
			len++;
		}
		len++;
	}

	len++;

	str = malloc(sizeof(char) * len);

	if (str == NULL)
		return (NULL);

	o = 0;

	for (n = 0; n < ac; n++)
	{
		for (m = 0; av[n][m]; m++)
		{
			str[o] = av[n][m];
			o++;
		}
		str[o] = '\n';
		o++;
	}
	str[o] = '\0';
	return (str);
}
