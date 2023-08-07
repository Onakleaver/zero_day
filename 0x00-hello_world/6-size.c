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

	puts("Size of a char: %lu bytes(s)", sizeof(a));
	puts("Size of an int: %lu bytes(s)", sizeof(b));
	puts("Size of a long int: %lu bytes(s)", sizeof(c));
	puts("Size of a long long: %lu bytes(s)", sizeof(d));
	puts("Size of a float: %lu bytes(s)", sizeof(e));

	return (0);
}
