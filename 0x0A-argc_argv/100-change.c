#include <stdio.h>
#include <stdlib.h>

/**
 * amount - the main program
 * @num: an input integer
 * Return: the integer coins
 */
int amount(int num)
{
	int coins = 0, counter25 = 0, counter10 = 0;
	int counter5 = 0, counter2 = 0, counter1 = 0;

	while (num > 0)
	{
		if (num >= 25)
		{
			num -= 25;
			counter25 += 1;
		}
		else if (num >= 10)
		{
			num -= 10;
			counter10 += 1;
		}
		else if (num >= 5)
		{
			num -= 5;
			counter5 += 1;
		}
		else if (num >= 2)
		{
			num -= 2;
			counter2 += 1;
		}
		else if (num >= 1)
		{
			num -= 1;
			counter1 += 1;
		}
	}
	coins = counter25 + counter10 + counter5 + counter2 + counter1;
	return (coins);
}

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
	int coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (atoi(argv[1]) < 0)
	{
		printf("%d\n", 0);
	}
	else
	{
		coins = amount(atoi(argv[1]);
		printf("%d\n", coins);
	}
	return (0);
}
