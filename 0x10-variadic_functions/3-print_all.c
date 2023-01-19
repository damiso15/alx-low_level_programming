#include "variadic_functions.h"

/**
 * print_char - a function that prints characters
 * @ap: argument parameter
 * Return: Nothing
 */
void print_char(va_list ap)
{
	char hold;

	hold = va_arg(ap, int);
	printf("%c", hold);
}

/**
 * print_int - a function that prints integers
 * @ap: argument parameter
 * Return: Nothin
 */
void print_int(va_list ap)
{
	int hold;

	hold = va_arg(ap, int);
	printf("%d", hold);
}

/**
 * print_float - a function that prints floats
 * @ap: arguement parameter
 * Return: Nothing
 */
void print_float(va_list ap)
{
	double hold;

	hold = va_arg(ap, double);
	printf("%f", hold);
}

/**
 * print_string - a function that prints strings
 * @ap: argument parameter
 * Return: Nothing
 */
void print_string(va_list ap)
{
	char *hold;

	hold = va_arg(ap, char*);

	if (hold == NULL)
		hold = "(nil)";
	printf("%s", hold);
}

/**
 * print_all - a function that prints anything
 * @format: is a list of types of arguments passed to the function
 * Retunr: Nothing
 */
void print_all(const char * const format, ...)
{
	int num1, num2;
	char *separator;
	va_list ap;

	vf_t vf[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	separator = "", num1 = 0;
	va_start(ap, format);

	while (format && format[num1])
	{
		num2 = 0;

		while (vf[num2].str != NULL)
		{
			if (format[num1] == *vf[num2].str)
			{
				printf("%s", separator);
				vf[num2].fp(ap);
				separator = ", ";
			}
			num2++;
		}
		num1++;
	}
	printf("\n");
	va_end(ap);
}
