#include <stdio.h>

/**
  * _isdigit -Checks if input character is a digit (0 through 9)
  * @c: test character
  * Return:0 otherwise
  */
int _isdigit(int c)
{
	if (c == 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
