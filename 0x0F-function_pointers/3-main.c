#include "3-calc.h"

/**
 * main - the main function
 * @argc: command-line argument count
 * @argv: command-line argument in characters of array
 * Return: 0 as Success otherwise 1 as Error
 */
int main(int argc, char *argv[])
{
	int (*result)(int, int), num1, num2;
	char *sign;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]), num2 = atoi(argv[3]);
	sign = argv[2];
	result = get_op_func(sign);

	if (result == NULL)
	{
		printf("Error\n");
		return (99);
	}

	printf("%d\n", result(num1, num2));
	return (0);
}
