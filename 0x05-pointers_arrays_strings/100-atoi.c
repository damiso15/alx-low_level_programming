#include <stdio.h>

/**
 * _atoi - a function that convert a string to an integer.
 * @s: an input integer
 * Return: integer from conversion
 */
int _atoi(char *s)
{
	int total = 0, value = 0, i = 0;

	while (*s)
	{
		if (s[i] == '-')
			value++;

		else if (s[i] > 47 && s[i] < 58)
		{
			while (s[i] > 47 && s[i] < 58)
				total = total * 10 - (s[i++] - 48);
			break;
		}
		i++;
	}

	/*total *= value % 2 == 0 ? -1 : 1;*/
	return (total *= value % 2 = 0 ? -1 : 1);
}
