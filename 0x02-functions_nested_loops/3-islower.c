#include "main.h"

/**
 * _islower - check main
 * @c: an input character
 * Description: function uses _putchar to print alphabet in lowercase 10 times
 * Return: 1 if it is uppercase
 */
int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			lower = 1;
	}
	return (lower);
}
