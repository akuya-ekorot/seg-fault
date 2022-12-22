# Compilation Process for C programs with GCC

- Files end with a .c extension.
- .c files are human-readable, written in plain text using alphanumeric and math symbols
- C is a high-level language.
- Computer hardware communicate using low-level languages. Machine language and Assembly language.
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
akuya@linux: gcc -[options] [filename]
```

- As an example, let's create a simple C file called main.c. The code contained in `main.c` looks like this.

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
