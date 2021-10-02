<img  src  =  "https://camo.githubusercontent.com/2dec91e6bf9bc9cb3957f84ed9fe8e9a00dd6139eeeb04d3e2dae81977572059/68747470733a2f2f692e6962622e636f2f6e4d74525851522f486f6c626572746f6e2e706e67" width  =  "500"/>


# Simple_shell

It is a console that contains an interpreted environment and this is the content:

- `_freeenv` --> Release the memory used in environment variable

- `_strcat.c` --> Concatenates strings

- `_strdup.c` --> Duplicate strings

- `_strlen.c` --> Captures the length of a string

- `_strncmp.c` --> Compares the length and content of strings

- `_strtok.c` --> Separates strings from a delimiter

- `_putchar.c` --> Print one character

- `_puts.c` --> Print a string

- `_checkpath.c` --> Validates and fetches the contents of authentic shell environment variables

- `match.c` --> Contains the build-in functions

- `tokenizer.c` --> Bundles strings and prepares them to send to the _strtok function

- `shell.c` --> Main project function

- `main.h` --> Library

  


### Desciption

The shell allows us to access the operating system kernel. Actually, the shell interprets the command line and executes the programs it indicates. However, in addition to reading the command line, it can also execute commands found in a file. Any command that can be typed on the command line can be included in a file that is called a shell. These are the calls used:

- `fork`

-  `free`

- `getline`

- `getpid` 

- `isatty`

- `malloc`

- `stat`

- `strtok`

- `wait`

- `access`

- `exc`

- `write`

- `exit`

  

### FlowChart

<a href="https://lucid.app/lucidchart/invitations/accept/inv_a1bc173c-ce8a-4496-b8c3-bcfad1636812?viewport_loc=-311%2C-106%2C2560%2C1168%2C0_0"><img src="https://github.com/manolobkno08/simple_shell/blob/main/images/diagrama.png"></a>

  

### Examples

- Compile code

<img src = "https://cdn.discordapp.com/attachments/855109206503194644/879879815908433930/unknown.png" width = "900"/>

- Interactive mode

<img src = "https://cdn.discordapp.com/attachments/855109206503194644/879880317807247371/unknown.png" width = "900"/>

- Non-interactive mode

<img src = "https://cdn.discordapp.com/attachments/855109206503194644/879880794284376124/unknown.png" width = "900"/>


  

### Install
- Copy the repository to your linux 
- Enter the new folder `simple_shell`.
- Compile the files as in the example `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh`.
- Execute the `hsh` file for the interactive mode
- Non-interactive mode can run `$ echo "/bin/command" | ./hsh`.
  
  

### Authors

  

- **Sebastian Villa** - [*villalopezsebastian@gmail.com*](https://mail.google.com/mail/u/0/#inbox) - [GitHub](https://github.com/SebasVillaLo)

  

- **Manuel Alejandro Gomez** - [*manologm10@hotmail.com*](https://mail.google.com/mail/u/0/#inbox) - [GitHub](https://github.com/manolobkno08)
