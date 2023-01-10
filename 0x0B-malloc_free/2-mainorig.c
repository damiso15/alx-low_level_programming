#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - a function that concatenates two strings
 * @s1: an input string
 * @s2: an input string
 * Return: 0 as (Success)
 */

char *str_concat(char *s1, char *s2)
{
        int len, n;
        char *place_holder = s1;
        char *str;

        while (*s1)
        {
                s1++;
        }
        while (*s2)
        {
                *s1++ = *s2++;
        }
        *s1 = '\0';
        printf("%s\n", place_holder);

        if (place_holder == NULL)
        {
                return (NULL);
        }

        len = 0;
        while (*(place_holder + len) != '\0')
        {
                len++;
        }

        str = malloc(sizeof(char) * len + 1);

        n = 0;
        if (str != NULL)
        {
                for (; n < len; n++)
                {
                        str[n] = place_holder[n];
                }
                str[n] = '\0';
                return (str);
        }
        else
        {
                return (NULL);
        }
}


#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s;

    s = str_concat("Betty ", "Holberton");
    if (s == NULL)
    {
        printf("failed\n");
        return (1);
    }
    printf("%s\n", s);
    free(s);
    return (0);
}

