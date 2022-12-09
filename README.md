<p style="text-align: center; font-weight: bold" > :shell: Simple Shell </p>

To close our Low Level Programming module, we are expected to create a simple UNIX command Interpreter using C.


![WELCOME](https://i.pinimg.com/originals/9d/b9/71/9db9712c704dfba57ad2737bcf0de8a3.gif)

## Shell Overview 
Our simple Shell is a UNIX command Line interpreter that reads commands from the standard input or a file
and executes them.

## How our simple shell works : 
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

## Flowchart
To better understand the Logic behind our simple shell, please check this Flowchart 


```python
import foobar

# returns 'words'
foobar.pluralize('word')

# returns 'geese'
foobar.pluralize('goose')

# returns 'phenomenon'
foobar.singularize('phenomena')
```

## Contributing

Pull requests are welcome. For major changes, please open an issue first
to discuss what you would like to change.

Please make sure to update tests as appropriate.

## Contributors 
    - [CyrineZekri] : (https://github.com/CyrineZekri)
    - [Amine Khammessi] : (https://github.com/Aminekham