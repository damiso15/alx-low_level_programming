#include <stdio.h>

/**
 * main - entry point
 * Return: Always 0 as Success
 */
int main(void)
{
	unsigned long int a = 3, number = 612852475143;

	for (; a < 12057; a += 2)
	{
		while (number % a == 0 && number != 1)
			number /= a;
	}
	printf("%lu\n", number);
	return (0);
}
