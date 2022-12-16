#include <stdio.h>
/**
 * main - a function that finds and prints the sum of the even-valued terms,
 * followed by a new line.
 * Return: Always 0 as Success
 */
int main(void)
{
	long int a = 0, b = 0, c = 0, d = 1;

	while (b < 4000000)
	{
		b = c + d;
		if (b % 2 == 0)
		{
			a += b;
		}
		c = d;
		d = b;
	}
	printf("%li\n", a);
	return (0);
}
