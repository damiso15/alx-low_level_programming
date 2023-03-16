#include <stdio.h>

int is_palindrome(int n);

/**
 * main - the main code
 * Return: 0 as success
 */
int main(void)
{
	int largest_palindrome = 0;

	for (int i = 100; i < 1000; i++)
	{
		for (int j = 100; j < 1000; j++)
		{
			int product = i * j;

			if (is_palindrome(product) && product > largest_palindrome)
			{
				largest_palindrome = product;
			}
		}
	}
	printf("%d\n", largest_palindrome);

	return (0);
}


/**
 * is_palindrome - the code to find largest palindrome made from the
 * product of two 3-digit numbers
 * @n: the input integer
 * Return: the product is a palindrome and larger than the current
 * largest palindrome
 */
int is_palindrome(int n)
{
	int reversed = 0, remainder, original = n;

	while (n != 0)
	{
		remainder = n % 10;
		reversed = reversed * 10 + remainder;
		n /= 10;
	}

	return (reversed == original);
}

