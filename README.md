# Simple Shell

<p align="center">
<b>THE GATES OF SHELL</b>
<br><br>
<img src="https://pbs.twimg.com/media/CfyCyguWEAA6JOt.jpg">
</p>

A Unix shell is a command-line interpreter or shell that provides a command line user interface for Unix-like operating systems. The shell is both an interactive command language and a scripting language, and is used by the operating system to control the execution of the system using shell scripts.

The Simple shell is a command that reads lines from either a file or the terminal, interprets them, and executes commands read from the standard input or from a file.

But before the execution there are functinos that check every character typed to know what kind of command it is going to be executed, also checks the permissions of the current user, in order to know the type of comand depending on the characters typed the shell also search on the directories on the PATH that is an environmental variable that contains all the variables in the shell process.

## Getting Started

Here are the steps to execute the Shell

1. Git clone all this respository to your local directory.

```Bash
~ $ git clone https://github.com/nicolasquinchia/simple_shell.git
```
2. Compile the program executing the `compile_all` file.
```Bash
~ $ ./compile_all
```
3. Execute the shell.
```Bash
~ $ ./hsh
```
### Compilation
The compilation process is make with the script execution `compile_all` that contain the following statement:
```Bash
gcc -Wall -Werror -Wextra -pedantic *.c -o hsh
```
## Files
In the following table is brief description of each file in the repository.

File Name | Description
--------- | -----------
AUTHORS | Text file containing the contributing authors
compile_all | Script that compile all the c files
cp_environ.c | Copy all the environment VARS
doom.h | Header file with all the prototypes
exe_new_process.c | Create a new process and execute
\_getenv.c | get an environment variable
hsh | Shell executable file
\_is_ascci.c | Check if the characters typed are printable ASCII
main_shell.c | main function to process the shell interpreter
man_1_simple_shell | Man page of the simple Shell
README.md | Readme general information
sep_check.c | check if the string just have sep chars
str_to_2d.c | Split a string in sub strings

## Syntax

### Usage 
1. Execute the ./compile_all script to have the executable file hsh
2. Enter custom shell by typing "./hsh". You should be prompted with a #cisfun$
3. Type a command and press "Enter"
4. Appropriate output will appear next to it the prompt awaits the next command
5. Exit shell by typing "ctrl D"

### Commands

The shell works giving commands in the interface, the commands take in the following syntax: 

```Bash
#cisfun$ <command> <flags or options> <argument 1> <argument 2> ...
```

## Environment

The custom shell was developed and tested on Ubuntu 14.04 LTS via Vagrant in VirtualBox.

## Examples

### Interactive Mode

```Bash
~ $ ./hsh
#cisfun$ /bin/ls
 hsh main.c shell.c
#cisfun$
#cisfun$ exit
 ~ $
```
### Non-interactive Mode

```Bash
$ echo "/bin/ls" | ./hsh
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

## Authors

* Nicolas Quinchia Osorio [github: nicolasquinchia][1]
* Camilo Andres Pulgarín [github: camilo620][2]

[1]: https://github.com/nicolasquinchia
[2]: https://github.com/camilo620
