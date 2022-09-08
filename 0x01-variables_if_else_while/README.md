# Variables - if - else - while

## Resources
Read or watch:

- [Everything you need to know to start with C.pdf](https://drive.google.com/file/d/1wulc719Rraxe_0CTQBs2J-vvrY8qllQo/view?usp=sharing) (You do not have to learn everything in there yet, but make sure you read it entirely first and make sure you understand the slides: “comments”, “Data types | Integer types”, “Declaration”, “Characters”, “Arithmetic operators”, “Variables assignments”, “Comparisons”, “Logical operators”, “if, if…else”, “while loops”.)
- [Keywords and identifiers](https://publications.gbdirect.co.uk//c_book/chapter2/keywords_and_identifiers.html)
- [integers](https://publications.gbdirect.co.uk//c_book/chapter2/integral_types.html)
- [Arithmetic Operators in C](https://www.tutorialspoint.com/cprogramming/c_arithmetic_operators.htm)
- [If statements in C](https://www.cprogramming.com/tutorial/c/lesson2.html)
- [if…else statement](https://www.tutorialspoint.com/cprogramming/if_else_statement_in_c.htm)
- [Relational operators](https://www.tutorialspoint.com/cprogramming/c_relational_operators.htm)
- [Logical operators](https://fresh2refresh.com/c-programming/c-operators-expressions/c-logical-operators/)
- [while loop in C](https://www.tutorialspoint.com/cprogramming/c_while_loop.htm)
- [While loop](https://www.youtube.com/watch?v=Ju1LYO9pkaI&ab_channel=Simplified)

## man or help:
- _`ascii`_ (You do not need to learn about _`scanf`_, _`getc`_, _`getchar`_, _`EOF`_, _`EXIT_SUCCESS`_, _`time`_, _`rand`_, _`srand`_, _`RAND_MAX`_, _`for`_ loops, _`do...while`_ loops, functions.)

## General
- What are the arithmetic operators and how to use them
- What are the logical operators (sometimes called boolean operators) and how to use them
- What the the relational operators and how to use them
- What values are considered TRUE and FALSE in C
- What are the boolean operators and how to use them
- How to use the _`if`_, _`if ... else`_ statements
- How to use comments
- How to declare variables of types _`char`_, _`int`_, _`unsigned int`_
- How to assign values to variables
- How to print the values of variables of type _`char`_, _`int`_, - _`unsigned int`_ with _`printf`_
- How to use the _`while`_ loop
- How to use variables with the _`while`_ loop
- How to print variables using _`printf`_
- What is the _`ASCII`_ character set
- What are the purpose of the _`gcc`_ flags _`-m32`_ and _`-m64`_

## Requirements

- Allowed editors: _`vi`_, _`vim`_, _`emacs`_
- All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options _`-Wall -Werror -Wextra -pedantic -std=gnu89`_
- All your files should end with a new line
- A _`README.md`_ file, at the root of the folder of the project
- There should be no errors and no warnings during compilation
- You are not allowed to use _`system`_
- Your code should use the _`Betty`_ style. It will be checked using [_`betty-style.pl`](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl)_ and [_`betty-doc.pl`_](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl)




## Tasks
<h2 align="center"> ---❤️--- </h2>
<h2 align="center" >🌻<em>Positive anything is better than negative nothing</em>🌻</h2>

🦖 [0-positive_or_negative.c](https://github.com/gpradinett/holbertonschool-low_level_programming/blob/main/0x00-hello_world/0-preprocessor)

This program will assign a random number to the variable n each time it is executed. Complete the source code in order to print whether the number stored in the variable n is positive or negative.

- You can find the source code [here](https://github.com/holbertonschool/0x01.c/blob/master/0-positive_or_negative_c)
- The variable n will store a different value every time you will run this program
- You don’t have to understand what `rand`, `srand`, `RAND_MAX` do. Please do not touch this code
- The output of the program should be:
  - The number, followed by
    - if the number is greater than 0: `is positive`
    - if the number is 0: `is zero`
    - if the number is less than 0: `is negative`
  - followed by a new line


```
gpradinett@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-positive_or_negative.c -o 0-positive_or_negative
gpradinett@ubuntu:~/0x01$ ./0-positive_or_negative 
-520693284 is negative
gpradinett@ubuntu:~/0x01$ ./0-positive_or_negative 
-973398895 is negative
gpradinett@ubuntu:~/0x01$ ./0-positive_or_negative 
-199220452 is negative
gpradinett@ubuntu:~/0x01$ ./0-positive_or_negative 
561319348 is positive
gpradinett@ubuntu:~/0x01$ ./0-positive_or_negative 
561319348 is positive
gpradinett@ubuntu:~/0x01$ ./0-positive_or_negative 
266853958 is positive
gpradinett@ubuntu:~/0x01$ ./0-positive_or_negative 
-48147767 is negative
gpradinett@ubuntu:~/0x01$ ./0-positive_or_negative 
0 is zero
gpradinett@ubuntu:~/0x01$ 
```
Repo:

- GitHub repository: `holbertonschool-low_level_programming`
- Directory: `0x01-variables_if_else_while`
- File: [0-positive_or_negative.c](https://github.com/gpradinett/holbertonschool-low_level_programming/blob/main/0x01-variables_if_else_while/0-positive_or_negative.c)


<h2 align="center"> ---❤️--- </h2>
<h2 align="center" >🌻<em>The last digit</em>🌻</h2>

🦖 [1. The last digit](https://github.com/gpradinett/holbertonschool-low_level_programming/blob/main/0x01-variables_if_else_while/1-last_digit.c)

This program will assign a random number to the variable n each time it is executed. Complete the source code in order to print whether the number stored in the variable n is positive or negative.

- You can find the source code [here](https://github.com/holbertonschool/0x01.c/blob/master/0-positive_or_negative_c)
- The variable n will store a different value every time you will run this program
- You don’t have to understand what `rand`, `srand`, `RAND_MAX` do. Please do not touch this code
- The output of the program should be:
  - The number, followed by
    - if the number is greater than 0: `is positive`
    - if the number is 0: `is zero`
    - if the number is less than 0: `is negative`
  - followed by a new line


```
gpradinett@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-positive_or_negative.c -o 0-positive_or_negative
gpradinett@ubuntu:~/0x01$ ./0-positive_or_negative 
-520693284 is negative
gpradinett@ubuntu:~/0x01$ ./0-positive_or_negative 
-973398895 is negative
gpradinett@ubuntu:~/0x01$ ./0-positive_or_negative 
-199220452 is negative
gpradinett@ubuntu:~/0x01$ ./0-positive_or_negative 
561319348 is positive
gpradinett@ubuntu:~/0x01$ ./0-positive_or_negative 
561319348 is positive
gpradinett@ubuntu:~/0x01$ ./0-positive_or_negative 
266853958 is positive
gpradinett@ubuntu:~/0x01$ ./0-positive_or_negative 
-48147767 is negative
gpradinett@ubuntu:~/0x01$ ./0-positive_or_negative 
0 is zero
gpradinett@ubuntu:~/0x01$ 
```
Repo:

- GitHub repository: `holbertonschool-low_level_programming`
- Directory: `0x01-variables_if_else_while`
- File: [0-positive_or_negative.c](https://github.com/gpradinett/holbertonschool-low_level_programming/blob/main/0x01-variables_if_else_while/1-last_digit.c)


<h2 align="center"> ---❤️--- </h2>
<h2 align="center" >🌻<em>I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game</em>🌻</h2>

🦖 [2-print_alphabet.c](https://github.com/gpradinett/holbertonschool-low_level_programming/blob/main/0x01-variables_if_else_while/2-print_alphabet.c)

Write a program that prints the alphabet in lowercase, followed by a new line.

- You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
- All your code should be in the `main` function
- You can only use `putchar` twice in your code


```
gpradinett@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-print_alphabet.c -o 2-print_alphabet
gpradinett@ubuntu:~/0x01$ ./2-print_alphabet 
abcdefghijklmnopqrstuvwxyz
gpradinett@ubuntu:~/0x01$
```
Repo:

- GitHub repository: `holbertonschool-low_level_programming`
- Directory: `0x01-variables_if_else_while`
- File: [2-print_alphabet.c](https://github.com/gpradinett/holbertonschool-low_level_programming/blob/main/0x01-variables_if_else_while/2-print_alphabet.c)


<h2 align="center"> ---❤️--- </h2>
<h2 align="center" >🌻<em>alphABET</em>🌻</h2>

🦖 [3. alphABET](https://github.com/gpradinett/holbertonschool-low_level_programming/blob/main/0x01-variables_if_else_while/3-print_alphabets.c)

Write a program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.

- You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
- All your code should be in the `main` function
- You can only use `putchar` three times in your code


```
gpradinett@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-print_alphabets.c -o 3-print_alphabets
gpradinett@ubuntu:~/0x01$ ./3-print_alphabets | cat -e
abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ$
gpradinett@ubuntu:~/0x01$ 
```
Repo:

- GitHub repository: `holbertonschool-low_level_programming`
- Directory: `0x01-variables_if_else_while`
- File: [3-print_alphabets.c](https://github.com/gpradinett/holbertonschool-low_level_programming/blob/main/0x01-variables_if_else_while/3-print_alphabets.c)



<h2 align="center"> ---❤️--- </h2>
<h2 align="center" >🌻<em>When I was having that alphabet soup, I never thought that it would pay off</em>🌻</h2>

🦖 [4-print_alphabt.c](https://github.com/gpradinett/holbertonschool-low_level_programming/blob/main/0x01-variables_if_else_while/4-print_alphabt.c)

Write a program that prints the alphabet in lowercase, followed by a new line.

- Print all the letters except `q` and `e`
- You can only use the putchar function (every other function (`printf`, `puts`, etc…) is forbidden)
- All your code should be in the `main` function
- You can only use `putchar` twice in your code


```
gpradinett@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-print_alphabt.c -o 4-print_alphabt
gpradinett@ubuntu:~/0x01$ ./4-print_alphabt 
abcdfghijklmnoprstuvwxyz
gpradinett@ubuntu:~/0x01$ ./4-print_alphabt | grep [eq]
gpradinett@ubuntu:~/0x01$ 
```
Repo:

- GitHub repository: `holbertonschool-low_level_programming`
- Directory: `0x01-variables_if_else_while`
- File: [4-print_alphabt.c](https://github.com/gpradinett/holbertonschool-low_level_programming/blob/main/0x01-variables_if_else_while/4-print_alphabt.c)




<h2 align="center"> ---❤️--- </h2>
<h2 align="center" >🌻<em>Numbers</em>🌻</h2>

🦖 [5-print_numbers.c](https://github.com/gpradinett/holbertonschool-low_level_programming/blob/main/0x01-variables_if_else_while/5-print_numbers.c)

Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.

 - All your code should be in the `main` function


```
gpradinett@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-print_numbers.c -o 5-print_numbers
gpradinett@ubuntu:~/0x01$ ./5-print_numbers 
0123456789
gpradinett@ubuntu:~/0x01$ 
```
Repo:

- GitHub repository: `holbertonschool-low_level_programming`
- Directory: `0x01-variables_if_else_while`
- File: [5-print_numbers.c](https://github.com/gpradinett/holbertonschool-low_level_programming/blob/main/0x01-variables_if_else_while/5-print_numbers.c)



<h2 align="center"> ---❤️--- </h2>
<h2 align="center" >🌻<em>Numberz</em>🌻</h2>

🦖 [6-print_numberz.c](https://github.com/gpradinett/holbertonschool-low_level_programming/blob/main/0x01-variables_if_else_while/6-print_numberz.c)

Write a program that prints all single digit numbers of base 10 starting from `0`, followed by a new line.

 - You are not allowed to use any variable of type char
 - You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
 - You can only use `putchar` twice in your code
 - All your code should be in the `main` function

```
gpradinett@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 6-print_numberz.c -o 6-print_numberz
gpradinett@ubuntu:~/0x01$ ./6-print_numberz 
0123456789
gpradinett@ubuntu:~/0x01$ 
```
Repo:

- GitHub repository: `holbertonschool-low_level_programming`
- Directory: `0x01-variables_if_else_while`
- File: [6-print_numberz.c](https://github.com/gpradinett/holbertonschool-low_level_programming/blob/main/0x01-variables_if_else_while/6-print_numberz.c)


<h2 align="center"> ---❤️--- </h2>
<h2 align="center" >🌻<em>Smile in the mirror</em>🌻</h2>

🦖 [7-print_tebahpla.c](https://github.com/gpradinett/holbertonschool-low_level_programming/blob/main/0x01-variables_if_else_while/7-print_tebahpla.c)

Write a program that prints all single digit numbers of base 10 starting from `0`, followed by a new line.

 - You are not allowed to use any variable of type char
 - You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
 - You can only use `putchar` twice in your code
 - All your code should be in the `main` function

```
gpradinett@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 7-print_tebahpla.c -o 7-print_tebahpla
gpradinett@ubuntu:~/0x01$ ./7-print_tebahpla
zyxwvutsrqponmlkjihgfedcba
gpradinett@ubuntu:~/0x01$
```
Repo:

- GitHub repository: `holbertonschool-low_level_programming`
- Directory: `0x01-variables_if_else_while`
- File: [7-print_tebahpla.c](https://github.com/gpradinett/holbertonschool-low_level_programming/blob/main/0x01-variables_if_else_while/7-print_tebahpla.c)


<h2 align="center"> ---❤️--- </h2>
<h2 align="center" >🌻<em>Hexadecimal</em>🌻</h2>

🦖 [8-print_base16.c](https://github.com/gpradinett/holbertonschool-low_level_programming/blob/main/0x01-variables_if_else_while/8-print_base16.c)

Write a program that prints all the numbers of base 16 in lowercase, followed by a new line.

 - You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
 - All your code should be in the `main` function
 - You can only use `putchar` three times in your code


```
gpradinett@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 8-print_base16.c -o 8-print_base16
gpradinett@ubuntu:~/0x01$ ./8-print_base16
0123456789abcdef
gpradinett@ubuntu:~/0x01$
```
Repo:

- GitHub repository: `holbertonschool-low_level_programming`
- Directory: `0x01-variables_if_else_while`
- File: [8-print_base16.c](https://github.com/gpradinett/holbertonschool-low_level_programming/blob/main/0x01-variables_if_else_while/8-print_base16.c)


<h2 align="center"> ---❤️--- </h2>
<h2 align="center" >🌻<em>Patience, persistence and perspiration make an unbeatable combination for success</em>🌻</h2>

🦖 [9-print_comb.c](https://github.com/gpradinett/holbertonschool-low_level_programming/blob/main/0x01-variables_if_else_while/9-print_comb.c)

Write a program that prints all possible combinations of single-digit numbers.

 - Numbers must be separated by ,, followed by a space
 - Numbers should be printed in ascending order
 - You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
 - All your code should be in the `main` function
 - You can only use `putchar` four times maximum in your code
 - You are not allowed to use any variable of type `char`

```
gpradinett@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 9-print_comb.c -o 9-print_comb
gpradinett@ubuntu:~/0x01$ ./9-print_comb | cat -e
0, 1, 2, 3, 4, 5, 6, 7, 8, 9$
gpradinett@ubuntu:~/0x01$ 
```
Repo:

- GitHub repository: `holbertonschool-low_level_programming`
- Directory: `0x01-variables_if_else_while`
- File: [9-print_comb.c](https://github.com/gpradinett/holbertonschool-low_level_programming/blob/main/0x01-variables_if_else_while/9-print_comb.c)



<h2 align="center"> ---❤️--- </h2>
<h2 align="center" >🌻<em>Inventing is a combination of brains and materials. The more brains you use, the less material you need</em>🌻</h2>

🦖 [100-print_comb3.c](https://github.com/gpradinett/holbertonschool-low_level_programming/blob/main/0x01-variables_if_else_while/9-print_comb.c)

Write a program that prints all possible different combinations of two digits.

 - Numbers must be separated by `,`, followed by a space
 - The two digits must be different
 - `01` and `10` are considered the same combination of the two digits `0` and `1`
 - Print only the smallest combination of two digits
 - Numbers should be printed in ascending order, with two digits
 - You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
 - You can only use `putchar` five times maximum in your code
 - You are not allowed to use any variable of type `char`
 - All your code should be in the `main` function

```
gpradinett@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-print_comb3.c -o 100-print_comb3
gpradinett@ubuntu:~/0x01$ ./100-print_comb3
01, 02, 03, 04, 05, 06, 07, 08, 09, 12, 13, 14, 15, 16, 17, 18, 19, 23, 24, 25, 26, 27, 28, 29, 34, 35, 36, 37, 38, 39, 45, 46, 47, 48, 49, 56, 57, 58, 59, 67, 68, 69, 78, 79, 89
gpradinett@ubuntu:~/0x01$ 
```
Repo:

- GitHub repository: `holbertonschool-low_level_programming`
- Directory: `0x01-variables_if_else_while`
- File: [100-print_comb3.c](https://github.com/gpradinett/holbertonschool-low_level_programming/blob/main/0x01-variables_if_else_while/9-print_comb.c)


<h2 align="center"> ---❤️--- </h2>
<h2 align="center" >🌻<em>The success combination in business is: Do what you do better... and: do more of what you do...</em>🌻</h2>

🦖 [101-print_comb4.c]()

Write a program that prints all possible different combinations of three digits.

 - Numbers must be separated by ,, followed by a space
 - The three digits must be different
 - `012`, `120`, `102`, `021`, `201`, `210` are considered the same combination of the three digits `0`, `1` and `2`
 - Print only the smallest combination of three digits
 - Numbers should be printed in ascending order, with three digits
 - You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
 - You can only use `putchar` six times maximum in your code
 - You are not allowed to use any variable of type `char`
 - All your code should be in the `main` function

```
gpradinett@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 101-print_comb4.c -o 101-print_comb4
gpradinett@ubuntu:~/0x01$ ./101-print_comb4
012, 013, 014, 015, 016, 017, 018, 019, 023, 024, 025, 026, 027, 028, 029, 034, 035, 036, 037, 038, 039, 045, 046, 047, 048, 049, 056, 057, 058, 059, 067, 068, 069, 078, 079, 089, 123, 124, 125, 126, 127, 128, 129, 134, 135, 136, 137, 138, 139, 145, 146, 147, 148, 149, 156, 157, 158, 159, 167, 168, 169, 178, 179, 189, 234, 235, 236, 237, 238, 239, 245, 246, 247, 248, 249, 256, 257, 258, 259, 267, 268, 269, 278, 279, 289, 345, 346, 347, 348, 349, 356, 357, 358, 359, 367, 368, 369, 378, 379, 389, 456, 457, 458, 459, 467, 468, 469, 478, 479, 489, 567, 568, 569, 578, 579, 589, 678, 679, 689, 789
gpradinett@ubuntu:~/0x01$ 
```
Repo:

- GitHub repository: `holbertonschool-low_level_programming`
- Directory: `0x01-variables_if_else_while`
- File: [101-print_comb4.c]()




<h2 align="center"> ---❤️--- </h2>
<h2 align="center" >🌻<em>Software is eating the World</em>🌻</h2>

🦖 [12. Software is eating the World]()

Write a program that prints all possible combinations of two two-digit numbers.

 - The numbers should range from 0 to 99
 - The two numbers should be separated by a space
 - All numbers should be printed with two digits. 1 should be printed as 01
 - The combination of numbers must be separated by comma, followed by a space
 - The combinations of numbers should be printed in ascending order
 - 00 01 and 01 00 are considered as the same combination of the numbers 0 and 1
 - You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
 - You can only use putchar eight times maximum in your code
 - You are not allowed to use any variable of type `char`
 - All your code should be in the `main` function

```
gpradinett@julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 102-print_comb5.c -o 102-print_comb5
gpradinett@ubuntu:~/0x01$ ./102-print_comb5
00 01, 00 02, 00 03, 00 04, 00 05, 00 06, 00 07, 00 08, 00 09, 00 10, 00 11, [...] 40 91, 40 92, 40 93, 40 94, 40 95, 40 96, 40 97, 40 98, 40 99, 41 42, 41 43, 41 44, 41 45, 41 46, 41 47, 41 48, 41 49, 41 50, 41 51, 41 52, 41 53 [...] 93 95, 93 96, 93 97, 93 98, 93 99, 94 95, 94 96, 94 97, 94 98, 94 99, 95 96, 95 97, 95 98, 95 99, 96 97, 96 98, 96 99, 97 98, 97 99, 98 99
```
Repo:

- GitHub repository: `holbertonschool-low_level_programming`
- Directory: `0x01-variables_if_else_while`
- File: [102-print_comb5.c]()



<h2 align="center"> ---❤️--- </h2>
<h2 align="center" >🌻<em>🦄</em>🌻</h2>

<sub>_You can contact me_ 📩

[Fernando J. Gonzales Pradinett](https://github.com/gpradinett)

<p align="left">
<a href="https://twitter.com/gpradinett" target="blank"><img align="center" src="https://raw.githubusercontent.com/rahuldkjain/github-profile-readme-generator/master/src/images/icons/Social/twitter.svg" alt="gpradinett" height="30" width="40" /></a>
<a href="https://www.linkedin.com/in/fernando-gonzales-pradinett/" target="blank"><img align="center" src="https://raw.githubusercontent.com/rahuldkjain/github-profile-readme-generator/master/src/images/icons/Social/linked-in-alt.svg" alt="gpradinett" height="30" width="40" /></a>
<a href="https://instagram.com/gpradinett" target="blank"><img align="center" src="https://raw.githubusercontent.com/rahuldkjain/github-profile-readme-generator/master/src/images/icons/Social/instagram.svg" alt="gpradinett" height="30" width="40" /></a>
<a href="https://medium.com/@gpradinett" target="blank"><img align="center" src="https://raw.githubusercontent.com/rahuldkjain/github-profile-readme-generator/master/src/images/icons/Social/medium.svg" alt="@gpradinett" height="30" width="40" /></a>
<a href="https://discord.gg/gpradinett" target="blank"><img align="center" src="https://raw.githubusercontent.com/rahuldkjain/github-profile-readme-generator/master/src/images/icons/Social/discord.svg" alt="gpradinett" height="30" width="40" /></a>
</p>
