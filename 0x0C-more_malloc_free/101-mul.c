#include "main.h"
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>

/**
 * mul - a program that multiplies two positive numbers
 * @argc - an input integer that contains the number of command line
 * arguments
 * @argv: an input array containing the program command line arguments
 * Return: 0 as success and 1 as error
 */
int main(int argc, char *argv[])
{
	long unsigned int sum, num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	
	if (!isdigit(num1) && isdigit(num2))
		exit (98);

	else
	{
		sum = num1 * num2;
		printf("%lu\n", sum);
	}
	return (0);
}
