#include<stdio.h>
/**
 * main -Entry point
 *
 * Return: Always (0)
 */
int main(void)
{
	int base;
	char alpha;

	base = 48;
	while (base <= 57)
	{
		putchar(base);
		base++;
	}
	alpha = 97;
	while (alpha <= 102)
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
