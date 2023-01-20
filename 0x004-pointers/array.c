#include <stdio.h>

/**
 * main - entry point of the program
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int ages[5];

	ages[0] = 26;
	ages[1] = 27;
	ages[2] = 28;
	ages[3] = 29;
	ages[4] = 30;

	printf("%p\n", ages); /* type int * */
	printf("%p\n", &ages); /* type int (*)[5] */

	return (0);
}
