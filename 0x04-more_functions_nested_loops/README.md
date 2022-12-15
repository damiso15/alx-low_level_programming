# alx-low_level_programming
* 0-isupper.c - Write a function that checks for uppercase character.
* 1-isdigit.c - Write a function that checks for a digit (0 through 9).
* 2-mul.c - Write a function that multiplies two integers.
* 3-print_numbers.c - Write a function that prints the numbers, from 0 to 9, followed by a new line.

## 0-isupper.c ##
Write a function that checks for uppercase character.

* Prototype: int _isupper(int c);
* Returns 1 if c is uppercase
* Returns 0 otherwise

FYI: The standard library provides a similar function: isupper. Run man isupper to learn more.

~~~~
julien@ubuntu:~/0x04$ cat 0-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    char c;

    c = 'A';
    printf("%c: %d\n", c, _isupper(c));
    c = 'a';
    printf("%c: %d\n", c, _isupper(c));
    return (0);
}
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-isupper.c -o 0-isuper
julien@ubuntu:~/0x04$ ./0-isuper 
A: 1
a: 0
julien@ubuntu:~/0x04$ 
~~~~

## 1-isdigit.c ##
Write a function that checks for a digit (0 through 9).

* Prototype: int _isdigit(int c);
* Returns 1 if c is a digit
* Returns 0 otherwise

FYI: The standard library provides a similar function: isdigit. Run man isdigit to learn more.

~~~~
julien@ubuntu:~/0x04$ cat 1-main.c 
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char c;

    c = '0';
    printf("%c: %d\n", c, _isdigit(c));
    c = 'a';
    printf("%c: %d\n", c, _isdigit(c));
    return (0);
}
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-isdigit.c -o 1-isdigit
julien@ubuntu:~/0x04$ ./1-isdigit 
0: 1
a: 0
julien@ubuntu:~/0x04$ 
~~~~

## 2-mul.c ##
Write a function that multiplies two integers.

* Prototype: int mul(int a, int b);

~~~~
julien@ubuntu:~/0x04$ cat 2-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    printf("%d\n", mul(98, 1024));
    printf("%d\n", mul(-402, 4096));
    return (0);
}
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-mul.c -o 2-mul
julien@ubuntu:~/0x04$ ./2-mul 
100352
-1646592
julien@ubuntu:~/0x04$ 
~~~~

## 3-print_numbers.c ##
Write a function that prints the numbers, from 0 to 9, followed by a new line.

* Prototype: void print_numbers(void);
* You can only use _putchar twice in your code

~~~~
julien@ubuntu:~/0x04$ cat 3-main.c 
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_numbers();
    return (0);
}
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 3-main.c 3-print_numbers.c -o 3-print_numbers
julien@ubuntu:~/0x04$ ./3-print_numbers | cat -e
0123456789$
julien@ubuntu:~/0x04$ 
~~~~

