#include <stdio.h>

/**
 * tries_change_age - attempts to change the parameter provided
 *
 * @n: int to print out
 *
 * Returns: void
*/
void tries_change_age(int n)
{
	n = 27;

	printf("Age is now: %d\n", n);
	printf("Address of age is now: %p\n", &n);
}
