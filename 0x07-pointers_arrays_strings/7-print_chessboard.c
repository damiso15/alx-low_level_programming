#include "main.h"

/**
 * print_chessboard - a function that prints the chessboard
 * @a: an input character
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int num1 = 0, num2;

	while (num1 < 8)
	{
		num2 = 0;
		while (num2 < 8)
		{
			_putchar(a[num1][num2]);
			num2++;
		}
		_putchar('\n');
		num1++;
	}
}
