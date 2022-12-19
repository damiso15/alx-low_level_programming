#include <stdio.h>

/**
 * main - a function that prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 * Return: Always 0 as Success
 */
int main(void)
{
	long int a = 0, b = 0, c = 1;
	int d = 0;

	while (d < 97)
	{
		a = b + c;
		printf("%li, ", a);
		b = c;
		c = a;

		d++;
	}
	a = b + c;
	printf("%li\n", a);
	return (0);
}
