#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char low_alpha;
	char upper_alpha;

	for (low_alpha = 'a'; low_alpha <= 'z'; low_alpha++)
		putchar(low_alpha);
	for (upper_alpha = 'A'; upper_alpha <= 'Z'; upper_alpha++)
		putchar(upper_alpha);
	putchar('\n');
	return (0);
}
