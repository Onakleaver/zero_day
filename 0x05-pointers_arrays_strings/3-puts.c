#include "main.h"

/**
  * _puts -prints strings followed by a new line
  * @str: string to be printed
  * Return: void
  */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
