#include "main.h"

/**
 * _isdigit - A function that checks for integers.
 * @c: An input character
 * Return: 1 if c is digit or 0 otherwise
 */
int _isdigit(int c)
{
	char  digit = '0';
	int isdigit = 0;

	for (; digit <= '9'; digit++)
	{
		if (digit == c)
		{
			isdigit = 1;
			break;
		}
	}
	return (isdigit);
}
