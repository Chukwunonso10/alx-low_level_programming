#include <stdio.h>
/**
 * main - represent Entry poin
 * Return: 0 for sucess
 */
int main(void)
{
	unsigned short a = '0';
	int i;

	for (i = 0; i < 10; i++)
	{
	putchar(a);
	a++;
	}
	a = '1';
	for (i = 0; i < 6; i++)
	{
	putchar('0' + a);
	a++;
	}
	putchar('\n');
	putchar(',');
	putchar(' ');
	return (0);
}
