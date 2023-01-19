#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers, followed by a new line
 * @separator: is the string to be printed between numbers
 * @n: is the number of integers passed to the function
 * Return: 0 as Success
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int num, print;
	va_list ap;

	va_start(ap, n);

	if (n == 0)
		printf("\n");

	for (num = 0; num < n; num++)
	{
		print = va_arg(ap, unsigned int);
		printf("%d", print);

		if (separator != NULL && num < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
