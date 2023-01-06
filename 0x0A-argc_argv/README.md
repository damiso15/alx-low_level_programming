# alx-low_level_programming
* 0-whatsmyname.c - Write a program that prints its name, followed by a new line.
* 1-args.c - Write a program that prints the number of arguments passed into it.
* 2-args.c - Write a program that prints all arguments it receives.
* 3-mul.c - Write a program that multiplies two numbers.


## 0-whatsmyname.c ##

Write a program that prints its name, followed by a new line.

* If you rename the program, it will print the new name, without having to compile it again
* You should not remove the path before the name of the program

~~~~
julien@ubuntu:~/0x0A. argc, argv$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-whatsmyname.c -o mynameis
julien@ubuntu:~/0x0A. argc, argv$ ./mynameis 
./mynameis
julien@ubuntu:~/0x0A. argc, argv$ mv mynameis mynewnameis
julien@ubuntu:~/0x0A. argc, argv$ ./mynewnameis 
./mynewnameis
julien@ubuntu:~/0x0A. argc, argv$ 
~~~~

## 1-args.c ##

Write a program that prints the number of arguments passed into it.

* Your program should print a number, followed by a new line

~~~~
julien@ubuntu:~/0x0A. argc, argv$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-args.c -o nargs
julien@ubuntu:~/0x0A. argc, argv$ ./nargs 
0
julien@ubuntu:~/0x0A. argc, argv$ ./nargs hello
1
julien@ubuntu:~/0x0A. argc, argv$ ./nargs "hello, world"
1
julien@ubuntu:~/0x0A. argc, argv$ ./nargs hello, world
2
julien@ubuntu:~/0x0A. argc, argv$ 
~~~~

## 2-args.c ##

Write a program that prints all arguments it receives.

* All arguments should be printed, including the first one
* Only print one argument per line, ending with a new line

~~~~
julien@ubuntu:~/0x0A. argc, argv$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-args.c -o args
julien@ubuntu:~/0x0A. argc, argv$ ./args 
./args
julien@ubuntu:~/0x0A. argc, argv$ ./args You can do anything, but not everything.
./args
You
can
do
anything,
but
not
everything.
julien@ubuntu:~/0x0A. argc, argv$ 
~~~~

## 3-mul.c ## 

Write a program that multiplies two numbers.

* Your program should print the result of the multiplication, followed by a new line
* You can assume that the two numbers and result of the multiplication can be stored in an integer
* If the program does not receive two arguments, your program should print Error, followed by a new line, and return 1

~~~~
julien@ubuntu:~/0x0A. argc, argv$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-mul.c -o mul
julien@ubuntu:~/0x0A. argc, argv$ ./mul 2 3
6
julien@ubuntu:~/0x0A. argc, argv$ ./mul 2 -3
-6
julien@ubuntu:~/0x0A. argc, argv$ ./mul 2 0
0
julien@ubuntu:~/0x0A. argc, argv$ ./mul 245 3245342
795108790
julien@ubuntu:~/0x0A. argc, argv$ ./mul
Error
julien@ubuntu:~/0x0A. argc, argv$ 
~~~~
