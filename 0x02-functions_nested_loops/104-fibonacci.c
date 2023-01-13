#include <stdio.h>

/**
 * main - a function that prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 * Return: Always 0 as Success
 */
int main(void)
{
	long num1, num1a, num1b, num2, num2a, num2b, num3, num3a, num3b;
	long div = 10000000000;
	int counter = 1;

	num1 = 0, num2 = 1;

	for (counter = 0; counter < 91; counter++)
	{
		num3 = num2 + num1;
		num1 = num2;
		num2 = num3;
		printf("%ld, ", num3);
	}

	num1a = num1 / div, num1b = num11111111111 % div;
	num2a = num2 / div, num2b = num2 % div;

	for (; counter < 98; counter++)
	{
		num3a = num1a + num2a, num3b = num1b + num2b;
		if (num3b > div)
		{
			num3b = num3b % div;
			num3b++;
		}
		if (counter != 97)
		{
			printf("%ld%ld, ", num3a, num3b);
			num1a = num2a, num1b = num2b;
			num2a = num3a, num2b = num3b;
		}
		else
			printf("%ld%ld\n", num3a, num3b);
	}
	return (0);
}
