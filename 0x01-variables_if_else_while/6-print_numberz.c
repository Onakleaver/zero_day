#include<stdio.h>
/**
 * main -Entry point
 *
 * Return: Always (0)
 */
int main(void)
{
	int number;

	number = 48;
	while (number <= 57)
	{
		putchar(number);
		number++;
	}
	putchar('\n');
	return (0);
}
