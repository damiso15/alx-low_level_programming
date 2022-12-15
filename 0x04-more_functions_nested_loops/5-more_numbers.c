#include "main.h"

/**
 * more_numbers - A function that prints 0 to 9
 * Return: Always 0 as Success
 */
void more_numbers(void)
{
	int a;
	int counter = 0;

	while (counter < 10)
	{

		for (a = 0; a <= 14; a++)
		{
			if (a > 9)
				_putchar(a / 10 + '0');

			_putchar(a % 10 + '0');
		}
		counter++;
		_putchar('\n');
	}
}
