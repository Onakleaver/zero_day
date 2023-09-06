#include<stdio.h>
/*
 * main -Entry point
 * @num: base 10 single digit numbers
 * Return: Always (0)
 */

int main(void)
{
	int num;

	num = '0';
	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}

