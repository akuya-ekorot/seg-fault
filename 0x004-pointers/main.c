#include <stdio.h>
#include "main.h"

/**
 * main - entry point of the program
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int age;
	int *ptr;

	age = 26;
	ptr = &age;

	print_age(age);
	printf("--------------\n");
	printf("Value of age is: %d\n", age);
	printf("Address of age is: %p\n", &age);
	printf("--------------\n");

	tries_change_age(age);
	printf("--------------\n");
	printf("Value of age is: %d\n", age);
	printf("Address of age is: %p\n", &age);
	printf("--------------\n");

	change_age(ptr);
	printf("--------------\n");
	printf("Value of age is: %d\n", age);
	printf("Address of age is: %p\n", &age);

	return (0);
}
