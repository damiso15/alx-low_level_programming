#include "variadic_functions.h"

/**
 * print_strings - a function that prints strings, followed by a new line
 * @separator: is the string to be printed between the strings
 * @n: is the number of strings passed to the function
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int num;
	char *str;
	va_list ap;

	va_start(ap, n);

	for (num = 0; num < n; num++)
	{
		str = va_arg(ap, char*);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (separator != NULL && num < n -1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
