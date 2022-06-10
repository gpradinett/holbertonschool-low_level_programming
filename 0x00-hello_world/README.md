![](https://s3.amazonaws.com/intranet-projects-files/holbertonschool-low_level_programming/212/cisfun.jpg)
># Hello World

## Resources

**Read or watch:**

- [Everything you need to know to start with C.pdf](https://holbertonintranet.s3.amazonaws.com/uploads/misc/2021/1/d801279f75de6a982a55d752dfd3632909f720f0.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOU5BHMTQX4%2F20220609%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20220609T022434Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=115fbc5822810277d14d7fd6d8737788c61e2897a3e9f6416333e7774a908fc7) (You do not have to learn everything in there yet, but make sure you read it entirely first)
- [Dennis Ritchie](https://en.wikipedia.org/wiki/Dennis_Ritchie)
- [“C” Programming Language: Brian Kernighan](https://www.youtube.com/watch?v=de2Hsvxaf8M&ab_channel=Computerphile)
- [Why C Programming Is Awesome](https://www.youtube.com/watch?v=smGalmxPVYc&ab_channel=ChrisHawkes)
- [Learning to program in C part 1](https://www.youtube.com/watch?v=rk2fK2IIiiQ&ab_channel=JonathanEngelsma)
- [Learning to program in C part 2](https://www.youtube.com/watch?v=FwpP_MsZWnU&ab_channel=JonathanEngelsma)
- [Understanding C program Compilation Process](https://www.youtube.com/watch?v=VDslRumKvRA&ab_channel=HowTo)
- [Betty Coding Style](https://github.com/holbertonschool/Betty/wiki)
- [Hash-bang under the hood](https://twitter.com/unix_byte/status/1024147947393495040?s=21) (Look at only after you finish consuming the other resources)
- [Linus Torvalds on C vs. C++](http://harmful.cat-v.org/software/c++/linus) (Look at only after you finish consuming the other resources)

**man or help:**

 - _`gcc`_
 - _`printf (3)`_
 - _`puts`_
 - _`putchar`_

**Learning Objectives**

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

**General**

- Why C programming is awesome
- Who invented C
- Who are Dennis Ritchie, Brian Kernighan and Linus Torvalds
- What happens when you type _`gcc main.c`_
- What is an entry point
- What is _`main`_
- How to print text using _`printf`_, _`puts`_ and _`putchar`_
- How to get the size of a specific type using the unary operator _`sizeof`_
- How to compile using _`gcc`_
- What is the default program name when compiling with _`gcc`_
- What is the official C coding style and how to check your code with _`betty-style`_
- How to find the right header to include in your source code when using a standard library function
- How does the _`main`_ function influence the return value of the program

**Requirements**
**C**
- Allowed editors: _`vi`_, _`vim`_, _`emacs`_
- All your files will be compiled on Ubuntu 20.04 LTS using _`gcc`_, using the options _`-Wall -Werror -Wextra -pedantic -std=gnu89`_
- All your files should end with a new line
- A _`README.md`_ file at the root of the repo, containing a description of the repository
- A _`README.md`_ file, at the root of the folder of this project, containing a description of the project
- There should be no errors and no warnings during compilation
- You are not allowed to use _`system`_
- Your code should use the _`Betty`_ style. It will be checked using _`betty-style.pl`_ and _`betty-doc.pl`_

**Shell Scripts**

- Allowed editors: _`vi`_, _`vim`_, _`emacs`_
- All your scripts will be tested on Ubuntu 20.04 LTS
- All your scripts should be exactly two lines long (_`$ wc -l file`_ should print 2)
- All your files should end with a new line
- The first line of all your files should be exactly _`#!/bin/bash`_
# More Info

**Betty linter**

To run the Betty linter just with command _`betty <filename>`_:

- Go to the _`Betty`_ repository
- Clone the _`repo`_ to your local machine
- _`cd`_ into the Betty directory
- Install the linter with _`sudo ./install.sh`_
- _`emacs`_ or _`vi`_ a new file called _`betty`_, and copy the script below:

```
#!/bin/bash
# Simply a wrapper script to keep you from having to use betty-style
# and betty-doc separately on every item.
# Originally by Tim Britton (@wintermanc3r), multiargument added by
# Larry Madeo (@hillmonkey)

BIN_PATH="/usr/local/bin"
BETTY_STYLE="betty-style"
BETTY_DOC="betty-doc"

if [ "$#" = "0" ]; then
    echo "No arguments passed."
    exit 1
fi

for argument in "$@" ; do
    echo -e "\n========== $argument =========="
    ${BIN_PATH}/${BETTY_STYLE} "$argument"
    ${BIN_PATH}/${BETTY_DOC} "$argument"
done
```
- Once saved, exit file and change permissions to apply to all users with _`chmod a+x betty`_
- Move the _`betty`_ file into _`/bin/`_ directory or somewhere else in your _`$PATH`_ with _`sudo mv betty /bin/`_

You can now type _`betty <filename>`_ to run the Betty linter!   

**Description of each file:**

| File | Description |
| ------ | ------ |
| 0-preprocessor | Bash script to run a C file through the preprocessor and save the output in the file "c".| 
| 1-compiler | Bash script to compile a C file without linking. |
| 2-assembler | Bash script to generate the assembly code of a C source code. |
| 3-name | C program that prints a text using puts. |
| 4-puts.c | Write a C program that prints exactly _`"Programming is like building a multilingual puzzle`_, followed by a new line. |
| 5-printf.c | 	C program that prints a text using printf. |
| 6-size.c | C program that prints the size of various types on the computer is compiled. |
| 100-intel | Bash script that generates the assembly code of a C code and save it in an output file. |
| 101-quote.c | C program that prints using write system call. |

 - [_Fernando J. Gonzales Pradinett._](https://twitter.com/gpradinett) 