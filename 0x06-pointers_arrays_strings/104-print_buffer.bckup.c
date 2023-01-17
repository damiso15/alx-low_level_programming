#include "main.h"
#include <stdio.h>

/**
 * print_buffer - a funtions that prints a buffer
 * @b: an input buffer
 * @size: size of the buffer
 * Return: Nothing
 */

void print_buffer(char *b, int size)
{
	int num1, num2, counter;

	num2 = 0;

	while (num2 < size)
	{
		printf("000000%02x: ", num2);

		counter = 0;

			while (counter < 10)
			{
				if (num1 >= size)
					printf("  ");
				else
					printf("%02x", *(b + num1));

				if (num1 % 2 != 0)
					printf(" ");

				num1++, counter++;
			}

			num1 -= 10, counter = 0;

			while (counter < 10 && num1 < size)
			{
				printf("%c", *(b + num1) > 31 && *(b + num1) < 127 ? *(b + num1) : '.');
				counter++, num1++;
			}
			if (num2 < size - 10)
				printf("\n");

		num2 += 10;
	}
	printf("\n");
}
