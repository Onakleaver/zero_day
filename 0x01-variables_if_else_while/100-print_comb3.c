#include<stdio.h>
/**
* main -Entry point
*
* Return:Always (0)
*/
int main(void)
{
	int dig1;

	dig1 = 48;
	while (dig1 <= 57)
	{
		int dig2 = 48;

		while (dig2 <= 57)
		{
			putchar(dig1);
			putchar(dig2);
			putchar(',');
			putchar(' ');
			dig2++;
		}
		dig1++;
		putchar('\n');
	}
	return (0);
}
