#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the characte rto print
 * Return: on Success 1
 * On error, -1 is returned, an errno is set appropraitely
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
