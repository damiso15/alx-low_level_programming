# alx-low_level_programming
* 0-puts_recursion.c - Write a function that prints a string, followed by a new line.
* 1-print_rev_recursion.c - Write a function that prints a string in reverse.
* 2-strlen_recursion.c - Write a function that returns the length of a string.


## 0-puts_recursion.c ##

Write a function that prints a string, followed by a new line.

* Prototype: void _puts_recursion(char *s);

FYI: The standard library provides a similar function: puts. Run man puts to learn more.

~~~~
julien@ubuntu:~/0x08. Recursion$ cat 0-main.c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    _puts_recursion("Puts with recursion");
    return (0);
}
julien@ubuntu:~/0x08. Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 0-main.c 0-puts_recursion.c -o 0-puts_recursion
julien@ubuntu:~/0x08. Recursion$ ./0-puts_recursion 
Puts with recursion
julien@ubuntu:~/0x08. Recursion$ 
~~~~

## 1-print_rev_recursion.c ##

Write a function that prints a string in reverse.

* Prototype: void _print_rev_recursion(char *s);

~~~~
julien@ubuntu:~/0x08. Recursion$ cat 1-main.c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    _print_rev_recursion("\nColton Walker");
    return (0);
}
julien@ubuntu:~/0x08. Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 1-main.c 1-print_rev_recursion.c -o 1-print_rev_recursion
julien@ubuntu:~/0x08. Recursion$ ./1-print_rev_recursion 
reklaW notloC
julien@ubuntu:~/0x08. Recursion$ 
~~~~

## 2-strlen_recursion.c ##

Write a function that returns the length of a string.

* Prototype: int _strlen_recursion(char *s);

FYI: The standard library provides a similar function: strlen. Run man strlen to learn more.


~~~~
julien@ubuntu:~/0x08. Recursion$ cat 2-main.c 
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    n = _strlen_recursion("Corbin Coleman");
    printf("%d\n", n);
    return (0);
}
julien@ubuntu:~/0x08. Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89  2-main.c 2-strlen_recursion.c -o 2-strlen_recursion
julien@ubuntu:~/0x08. Recursion$ ./2-strlen_recursion 
14
julien@ubuntu:~/0x08. Recursion$ 
~~~~
