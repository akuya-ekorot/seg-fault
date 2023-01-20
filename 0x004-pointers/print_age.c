#include <stdio.h>

/**
 * print_age - prints the parameter provided
 *
 * @n: int to print out
 *
 * Returns: void
*/
void print_age(int n)
{
	printf("Paremeter recived is: %d\n", n);
	printf("Address of Paremeter recived is: %p\n", &n);
}
