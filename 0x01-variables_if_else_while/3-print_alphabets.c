#include<stdio.h>
/**
 * main -Entry point
 *
 * Return: always (0)
 */
int main(void)
{
	int letter;

	letter = 97;
	while (letter <= 122)
	{
		putchar(letter);
		letter++;
	}
	letter = 65;
	while (letter <= 90)
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');

	return (0);
}
