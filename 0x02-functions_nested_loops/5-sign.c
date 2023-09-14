#include<stdio.h>
#include"main.h"
/**
 * print_sign -Prints the sign of a number
 * @n:Number to be tested.
 * Return: 1 if n < 0 else return 0 if n == 0 else return -1 if n > 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
