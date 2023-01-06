#include <stdio.h>

/**
 * main - a program that prints its name, followed by a new line
 * @argc: an input integer that contains the number of command line
 * arguments
 * @argv: an input array containing the program command line arguments
 * Return: 0 as success
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
