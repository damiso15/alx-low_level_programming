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
	char rev_alpha;

	for (rev_alpha = 'z'; rev_alpha >= 'a'; rev_alpha--)
		putchar(rev_alpha);
	putchar('\n');
	return (0);
}
