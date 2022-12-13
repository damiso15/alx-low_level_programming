#include <unistd.h>
#include "main.h"

/**
 * main - Check escription
 * escription: It prints the character _putchar, followe by a new line.
 * Return: 0.
 */
int main(void)
{
	char alpha[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
		_putchar(alpha[i]);
	_putchar('\n');

	return (0);
}
