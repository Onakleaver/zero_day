#include<stdio.h>
/**
* main -Entry point
*
* Return:Always (0)
*/
int main(void)
{
	int num;
	
	num = 0;
	while (num <= 9)
	{
		putchar('0' + num);
		num++;
	}
	putchar('\n');
	return (0);
}
