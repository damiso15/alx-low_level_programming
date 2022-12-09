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

	for (low_alpha = 'a'; low_alpha <= 'z'; low_alpha++)
	{
		if (low_alpha != 'e' && low_alpha !='q')
			putchar(low_alpha);
	}
	putchar('\n');
	return (0);
}
