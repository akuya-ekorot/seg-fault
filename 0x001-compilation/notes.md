# Compilation Process for C programs with GCC

- C is a programming language.
- Programs written in C end with a .c extension.
- .c files are human-readable, written in plain text using alphanumeric and math symbols
- This makes C is a high-level language.
- Computer hardware, on the other hand, communicate using low-level languages.
  - Low-level languages can either be **_Machine language_** and **_Assembly language_**.
  - Machine language is in binary, ones and zeros.
  - Assembly language is written with a set of letters and symbols.
- Necessary to convert .c files to a language the computer hardware can understand.
- Compilers do this conversion. From source language to target language.
- Very popular compiler is the GCC. GNU Compiler Collection.

## Compilation Process

- The compilation process involves the following steps.
  - Preprocessing
  - Compilation
  - Assemble
  - Linking
- Compiling command on linux

```bash
seg@fault: gcc -[options] [filename]
```

- As an example, let's create a simple C file called main.c.

```bash
seg@fault: touch main.c
seg@fault: ls
main.c
```

- The code contained in `main.c` looks like this.

```c
#include <stdio.h>

/**
 * main - entry point of the program. Prints "Hello World" in the terminal
 *
 * Return: Always 0. (Success)
*/
int main()
{
	printf("Hello World.\n");

	return (0);
}
```

- To compile the `main.c` file, run the `gcc main.c` command.
- This will create a file called `a.out` which is an executable file.

```bash
seg@fault: gcc main.c
seg@fault: ls
main.c a.out
```
