# Simple_shell :wrench:

![img](https://i.stack.imgur.com/dRKaU.gif)

---

Write a simple shell command line interpreter Unix in C

## Compile program

`gcc -Wall -Werror -Wextra -pedantic *.c -o hsh`

## Testing

### Interactive mode
`$ ./hsh
hsh$ /bin/ls
hsh main.c shell.c
hsh$
hsh$ exit
$ `

### Env

Prints out the current environment.

### cd

The cd command, also known as chdir, is a command-line shell command used to change the current working directory in various operating systems

### List of useful commands

cat - The most common use of cat is to read the contents of files

cp - copy files to another file

grep - searches a file for a specified pattern

less - less is a command that displays file contents or command output one page at a time in your terminal

ls - lists all files and directories

mv - moves one file into another file

pwd - prints out the current working directory


### Non-interactive mode
`$ echo "/bin/ls" | ./hsh
hsh main.c shell.c
$`

## Output

Unless specified otherwise, your program must have the exact same output as sh (/bin/sh) as well as the exact same error output.
The only difference is when you print an error, the name of the program must be equivalent to your argv[0] (See below)

Example of error with sh:
`$ echo "qwerty" | /bin/sh
/bin/sh: 1: qwerty: not found
$ echo "qwerty" | /bin/../bin/sh
/bin/../bin/sh: 1: qwerty: not found
$`

Same error with your program hsh:
`$ echo "qwerty" | ./hsh
./hsh: 1: qwerty: not found
$ echo "qwerty" | ./././hsh
./././hsh: 1: qwerty: not found
$`

### installation

* - git clone https://github.com/Esteban1891/simple_shell.git 
* - cd shell
* - gcc -Wall -Werror -Wextra -pedantic * .c -o hsh
* - Enjoy it

## Files

### README.md
README file for project simple shell at Holberton School

### man_1_simple_shell
man page for simple shell project

### shell.h
Header file for simple shell program

### shell.c
Program that runs simple shell included contain helper functions and built-ins

### AUTHORS
Contributors and authors for this project
* *Esteban De La Hoz* - Initial work - [Esteban1891](https://github.com/Esteban1891/simple_shell)
* *Jose Vallejo* - Initial work

### LICENSE
This project is licensed under the GPL License - see the [GPL 2.0](https://opensource.org/licenses/GPL-2.0) file for details

## tests
Folder contains all tests
