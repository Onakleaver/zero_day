#include<stdio.h>
/**
 * main- Prints sizes of differnt data types
 *
 *Return: Always (0)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long d;
	float e;

	printf("Size of a char: %lu bytes(s)\n", sizeof(a));
	printf("Size of an int: %lu bytes(s)\n", sizeof(b));
	printf("Size of a long int: %lu bytes(s)\n", sizeof(c));
	printf("Size of a long long: %lu bytes(s)\n", sizeof(d));
	printf("Size of a float: %lu bytes(s)\n", sizeof(e));
	return (0);
}
