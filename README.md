# Simple_shell
<p><strong><img title=“RE: Presentaci&oacute;n Jose vallejo-Esteban De La Hoz” src=“https://scontent.fctg2-1.fna.fbcdn.net/v/t1.0-9/92456525_761493601044680_4840941077651259392_n.jpg?_nc_cat=102&amp;_nc_sid=8024bb&amp;_nc_oc=AQltDS1SZx7RZ1FW5ld8TtWTiNaKS9G_FB1iD9LqlEZVv_Lit1YRuTOR_Yy4pekbJpQ&amp;_nc_ht=scontent.fctg2-1.fna&amp;oh=d6ba8926e3f9acc3e425ce63848cd72f&amp;oe=5EAF40FE” alt=“fucking-shell” width=“219" height=“102” /></strong></p>
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
