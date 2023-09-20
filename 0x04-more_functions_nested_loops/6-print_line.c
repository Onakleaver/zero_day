#include"main.h"

/**
 * print_line -Prints the line
 * @n: number if times the line is printed
 * Return: void
 */
void print_line(int n)
{
	if (n <= 0 )
	{
		_putchar('\n');
	}
	else
	{
		while (n > 0)
		{
			_putchar('_');
			n--;
		}
		_putchar('\n');
	}
}
