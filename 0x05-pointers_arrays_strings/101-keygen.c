#include <time.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * main - generates passwords of random value
 *
 * Return: 0 as (Success)
 */
int main(void)
{
	int rand_char, sum = 0;

	srand(time(0));
	while (sum < 2772 - 127)
	{
		rand_char = rand() % 127;
		if (rand_char > 32)
		{
			putchar(rand_char);
			sum += rand_char;
		}
	}
	putchar(2772 - sum);
	return (0);
}
