#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the opcodes of its own main function
 * @argc: an input integer for the argument count
 * @argv: an input array of characters
 * Return: 0 as Success otherwise 1 and 2 as Error
 */
int main(int argc, char *argv[])
{
	int n, data;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	data = atoi(argv[1]);

	if (data < 0)
	{
		printf("Error\n");
		return (2);
	}

	for (n = 0; n < data; n++)
	{
		printf("%02x", ((unsigned char *)main)[n]);
		printf("%c", n < data - 1 ? ' ' : '\n');
	}
	return (0);
}
