#include <stdio.h>

/**
 * change_age - attempts to change the parameter provided
 *
 * @n: int to print out
 *
 * Returns: void
*/
void change_age(int *n)
{
	*n = 27;

	printf("Age is now: %d\n", *n);
	printf("Address of parameter recieved is now: %p\n", n);
}
