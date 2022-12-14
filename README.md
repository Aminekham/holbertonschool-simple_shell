 <h1 align ="center"> :shell: Simple Shell </h1>

To close our Low Level Programming module, we are expected to create a simple UNIX command Interpreter using C.


![WELCOME](https://media.tenor.com/GVk4jB2u_i8AAAAd/coding.gif)

## :eyes: Shell Overview 

Our simple Shell is a UNIX command Line interpreter that reads commands from the standard input or a file
and executes them.

## :rocket: How our simple shell works : 
It consists of a an infinite loop that is only interrupted by reaching End of File (EOF) or pressing exit .
it follows the following steps : 

1. Reads the command(s) from the standard Input.
2. Parses the command(s)
3. Executes the command (s) which takes few other important steps: 
    - search the command in the environment 
    - search for the path 
    - create the child process to execute the command 
    - Free the allocated memory && the command output 
    - Go back to the begining of the infinite loop and print a prompt .

## :chart_with_upwards_trend: Flowchart
To better understand the Logic behind our simple shell, please check this Flowchart : 

![flow](https://user-images.githubusercontent.com/83099419/206648228-6d6918e5-9847-486a-906d-4ea44a124bd9.png)

## :mag_right: Compilation 

Our shell is compiled this way:

    -gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh

## :mag_right: Testing
We are Testing the shell in non interactive mode via these cases : 

    -$ ./hsh
    ($) /bin/ls
    hsh main.c shell.c
    ($)
    ($) exit
    $

And in Interactive mode via these cases:

    -$ echo "/bin/ls" | ./hsh
    hsh main.c shell.c test_ls_2
    $
    $ cat test_ls_2
    /bin/ls
    /bin/ls
    $
    $ cat test_ls_2 | ./hsh
    hsh main.c shell.c test_ls_2
    hsh main.c shell.c test_ls_2
    $

  ## :black_nib: Examples : 

    ls
    AUTHORS  README.md  execute_the_line.c  get_the_line.c 
    hsh  main.h  mainshell.c    man_1_simple_shell.1 
    parse_the_line.c  shell.c



    pwd
    /home/amine/pf/holbertonschool-simple_shell


    ls -l
    total 40
    -rw-r--r-- 1 root root  142 Dec  9 08:25 AUTHORS
    -rw-r--r-- 1 root root 2773 Dec  9 12:48 README.md
    -rw-r--r-- 1 root root 1179 Dec  9 04:38 Read.txt
    -rw-r--r-- 1 root root  455 Dec  9 12:46 execute_the_line.c
    -rw-r--r-- 1 root root  483 Dec  9 12:46 get_the_line.c
    -rw-r--r-- 1 root root  275 Dec  9 12:46 main.h
    -rw-r--r-- 1 root root  374 Dec  9 09:01 mainshell.c
    -rw-r--r-- 1 root root 3563 Dec  9 12:46 man_1_simple_shell.1
    -rw-r--r-- 1 root root  381 Dec  9 12:46 parse_the_line.c
    -rw-r--r-- 1 root root  492 Dec  9 12:46 shell.c

  ## :bookmark_tabs: Files Architecture 

    -  main.h : Header file containing all functions prototypes and included header files 
    -  mainshell.c : contains the function calls contributing the shell work 
    -  get_the_line.c : gets the user input from the standard input
    -  parse_the_line.c : takes the line of command and divides it.
    - env.c : gets and prints the environment
    -  shell.c : contains the checks before executing the main program
    - AUTHORS : file containing authors' names and their github usernames

  ## :iphone: Functions and System Calls Used 

    - execve 
    - exit 
    - fork 
    - free 
    - getpid 
    - malloc 
    - perror 
    - printf 
    - strtok

  ## :gem: Contributors 

 #### CyrineZekri        
 #### Amine Khammessi