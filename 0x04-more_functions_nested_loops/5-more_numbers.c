#include"main.h"

/**
  * more_numbers -Prints numbers ten times
  *
  * Return: void
  */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j <= 9)
			{
				_putchar(j + '0');
				/**
				  * C understans ASCII codes only.
				  * The above converts the integer to its ASCII value
				  * Example if j = 2, it takes the ASCII valu of 0 (i.e 48) 
				  * Adds j to it to get 50 which is the ASCII value of 2
				  */
			}
			else
			{
				_putchar((j / 10) + '0');
				/**
				  * above takes numbers greater than 9 to get the tens vaue
				  * so that it prints their ASCII value e.g 14/10 = 1.4
				  * only one is taken in this case
				  */
				_putchar((j % 10) + '0');
				/**
				  * this accounts for the ones value
				  * and coverts it to ASCII code
				  * e.g 14%10 = 4 which is converted to ASCII
				  */
			}
		}
		_putchar('\n');
	}
}
