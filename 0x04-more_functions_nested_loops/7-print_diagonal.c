#include"main.h"

/**
 * print_diagonal -Prints out a diagonal line
 * @n: number of times the line is to be printed
 * Return: void
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (n > 0)
		{
			_putchar(92);
			n--;
		}
	}
	_putchar('\n');
}
