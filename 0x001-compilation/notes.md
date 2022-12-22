# Compilation Process for C programs with GCC

- C is a programming language.
- Programs written in C end with a .c extension.
- .c files are human-readable, written in plain text using alphanumeric and math symbols
- This makes C is a high-level language.
- Computer hardware, on the other hand, communicate using low-level languages.
  - Low-level languages can either be **_Machine language_** or **_Assembly language_**.
  - Machine language is in binary, ones and zeros.
  - Assembly language is written with a set of letters and symbols.
- It is necessary to convert .c files to a language the computer hardware can understand.
- **_Compilers_** do this conversion. From source language to target language.
- A very popular compiler is the GCC. GNU Compiler Collection.

## Compilation Process

- The compilation process involves the following steps.
  - Preprocessing
  - Compilation
  - Assemble
  - Linking
- Here's the basic structure of a command to compile a C program in linux.

```bash
seg@fault: gcc -[options] [filename]
```

- As an example, let's create a simple C program called main.c.

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

- To run the executable file `a.out`. Write the following command.

```bash
seg@fault: ./a.out
Hello World
seg@fault:
```

- The compilation process above went through the following steps; preprocessing, compile, assembly, linking.

### Preprocessing Step

- In the preprocessing step, the preprocessor;
  - removes all the comments in the C file.
  - searches for and includes the code of the files referred to with `#include` statements to a file that will go to the next step of the process.
  - replaces the content of tokens from `#define` statements with the defined values.
- To generate preprocessor files to a file called **preprocessor** using `gcc` on linux, use the following command. Note the `-E` flag passed as an option.

```bash
seg@fault: gcc -E main.c > preprocessor
```

### Compile Step

- In the compile step;
  - the output file from the preprocessing step is translated to assembly code.
  - the resulting file from this step has a .s extension.
- Something to note, this is the step that actually generates assembly code. It may be elusively thought that the assemble stage generates assembly code.
- To generate assembly code using `gcc` on linux, use the following command.

```bash
seg@fault: gcc -S main.c
```

### Assemble Step

- In the assemble step;
  - The assembly code generated from the previous step is converted to machine code.
  - The machine code generated from this step is an object file that and has a .o extension.
- To generate machine code using `gcc` on linux, use the following command.

```bash
seg@fault: gcc -c main.c
```

### Linking Step

- This is the final step in the process.
- This process links all the files generated from previous steps into one.
- The executable file is the output from this step.
