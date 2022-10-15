#include <stdio.h>
/**
 * main - print out sizes of data types in C
 * code by bwave ict
 * Return: 0
*/
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of char: %lu byte(s)\n", sizeof(a));
	printf("Size of an int: %lu byte(s)\n", sizeof(b));
	printf("Size of a long int: %lu byte(s)\n", sizeof(c));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(d));
	printf("Size of float: %lu byte(s)\n", sizeof(f));
	return (0);
}
