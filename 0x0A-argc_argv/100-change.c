#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - a program that prints the minimum number of coins to make
 * change for an amount of money
 * @argc: an input integer that contains the number of command line
 * arguments
 * @argv: an input array containing the program command line arguments
 * Return: 0 as success and 1 as error
 */
int main(int argc, char *argv[])
{
	int change, coins, counter25, counter10;
	int counter5, counter2, counter1;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		change = atoi(argv[1]);
		coins = 0;
		counter25 = 0, counter10 = 0, counter5 = 0;
		counter2 = 0, counter1 = 0;

		while (change > 0)
		{
			if (change < 0)
			{
				printf("%d\n", 0);
			}
			else if (change >= 25)
			{
				change -= 25;
				counter25 += 1;
			}
			else if (change >= 10)
			{
				change -= 10;
				counter10 += 1;
			}
			else if (change >= 5)
			{
				change -= 5;
				counter5 += 1;
			}
			else if (change >= 2)
			{
				change -= 2;
				counter2 += 1;
			}
			else if (change >= 1)
			{
				change -= 1;
				counter1 += 1;
			}
		}
		coins = counter25 + counter10 + counter5 + counter2 + counter1;
		printf("%d\n", coins);
	}
	return (0);
}
