#include <stdio.h>

/**
 * main - a program that prints the numbers from 1 to 100,
 * followed by a new line. But for multiples of three print Fizz instead of the
 * number and for the multiples of five print Buzz. For numbers which are
 * multiple of both three and five print FizzBuzz.
 * Return: Always 0 as Success
 */
int main(void)
{
	int a;

	for (a = 1; a < 100; a++)
	{
		if (a % 3 == 0 && a % 5 == 0)
			printf("FizzBuzz ");
		else if (a % 3 == 0)
			printf("Fizz ");
		else if (a % 5 == 0)
		{
			if (a == 100)
				print("Buzz");
			else
				printf("Buzz ");
		}
		else
			printf("%d ", a);
	}
	printf("\n");

	return (0);
}
