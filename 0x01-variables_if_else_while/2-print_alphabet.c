#include<stdio.h>
/**
 * main -Entry point
 *@letter: lower case latters
 *Return: Always (0)
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
	putchar('\n');
	return (0);
}
