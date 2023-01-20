#include <stdio.h>

/**
 * main - entry point of the program
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int age;
	int *ptr;
	int **double_ptr;

	age = 26;
	ptr = &age;
	double_ptr = &ptr;

	printf("Value of age: %d\n", age);
	printf("Address of age: %p\n", &age);
	printf("------------\n");
	printf("Value of ptr: %p\n", ptr);
	printf("Address of ptr: %p\n", &ptr);
	printf("Value of age using ptr: %d\n", *ptr);
	printf("------------\n");
	printf("Value of double_ptr: %p\n", double_ptr);
	printf("Address of age using double_ptr: %p\n", *double_ptr);
	printf("Value of age using double_ptr: %d\n", **double_ptr);

	return (0);
}
