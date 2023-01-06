#include <stdio.h>

/**
 * main - a program that prints the number of arguments passed into it
 * @argc: an input integer that contains the number of command line
 * arguments
 * @argv: an input array containing the program command line arguments
 * Return: 0 as success
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
