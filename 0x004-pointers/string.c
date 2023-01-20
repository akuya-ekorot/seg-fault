#include <stdio.h>

/**
 * main - entry point of the program
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char name[6];
	char *last_name;

	name[0] = 'A';
	name[1] = 'k';
	name[2] = 'u';
	name[3] = 'y';
	name[4] = 'a';
	name[5] = '\0';

	last_name = "Ekorot";

	printf("First Name: %s\n", name);
	printf("Last Name: %s\n", last_name);

	return (0);
}
