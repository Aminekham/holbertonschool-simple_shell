 # :shell: Simple Shell

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
3. Executes the command (s) which takes few other important steps .
    . search the command in the environment 
    . search for the path 
    . create the child process to execute the command 
    . Free the allocated memory && the command output 
    . Go back to the begining of the infinite loop and print a prompt .

## :chart_with_upwards_trend: Flowchart
To better understand the Logic behind our simple shell, please check this Flowchart : 


```python
import foobar

# returns 'words'
foobar.pluralize('word')

# returns 'geese'
foobar.pluralize('goose')

# returns 'phenomenon'
foobar.singularize('phenomena')
```

## Compilation

Our shell is compiled this way:

    -gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh

## Testing 

Our shell works  like this in interactive mode:

```
 -$ ./hsh
($) /bin/ls
hsh main.c shell.c
($)
($) exit
$
```

But also in non-interactive mode:

```
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
```

 ##:sunglasses: Contributors 
    - [CyrineZekri] : (https://github.com/CyrineZekri)
    - [Amine Khammessi] : (https://github.com/Aminekham