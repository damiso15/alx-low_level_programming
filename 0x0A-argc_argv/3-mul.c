#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints its name, followed by a new line
 * @argc: an input integer that contains the number of command line
 * arguments
 * @argv: an input array containing the program command line arguments
 * Return: 0 as success and 1 as error
 */
int main(int argc, char *argv[])
{
	int sum;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	else
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
	}
	return (0);
}
