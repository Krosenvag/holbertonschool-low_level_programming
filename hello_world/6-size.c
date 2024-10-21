o#include <stdio.h>
/**
 * main - C program that prints the size of various types
 * Code by Prince Solomon
 * Return: 0
*/
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of a char: %d byte(s)\n", (int) sizeof(a));
	printf("Size of a int: %d byte(s)\n", (int) sizeof(b));
	printf("Size of a long int: %d byte(s)\n", (int) sizeof(c));
	printf("Size of a long long int: %d byte(s)\n", (int) sizeof(d));
	printf("Size of a float: %d byte(s)\n", (int) sizeof(f));
	return (0);

}

