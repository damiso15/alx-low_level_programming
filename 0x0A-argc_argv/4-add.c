#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - a program that adds positive numbers
 * @argc: the input character
 * @argv: the input character array
 * Return: Always 0 (Success) and 1 (Error)
 */
int main(int argc, char **argv)
{
	int num, result = 0, i;

	while (argc-- > 1)
	{
		for (i = 0; argv[argc][i]; i++)
		{
			if (!(isdigit(argv[argc][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		num = atoi(argv[argc]);
		result += num;
	}
	printf("%d\n", result);
	return (0);
}
