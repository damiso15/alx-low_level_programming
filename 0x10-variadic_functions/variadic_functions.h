#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct variadic_function
 * @str: the data type in characters
 * @fp: the function pointer
 */
typedef struct variadic_function
{
	char *str;
	void (*fp)(va_list);
} vf_t;

#endif
