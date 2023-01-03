#include <stdio.h>
#include "main.h"

/**
	* main - entry point of the program
	*
	* Return: Always 0 (Success)
*/
int main(void)
{
	float akuya, sam;

	akuya = 80.5;
	sam = 75.9;

	printf("The average weight is: %f\n", average(akuya, sam));

	return (0);
}
