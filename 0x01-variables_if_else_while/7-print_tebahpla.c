#include<stdio.h>
/**
 * main -Entry point
 *
 * Return: Always (0)
 */
int main(void)
{
	int alpha;

	alpha = 122;
	while (alpha >= 97)
	{
		putchar(alpha);
		alpha--;
	}
	putchar('\n');
	return (0);
}
