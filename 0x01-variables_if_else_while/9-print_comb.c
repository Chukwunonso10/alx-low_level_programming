#include <stdio.h>
/**
 * main - Entry point of the program
 * Return: 0 for sucess
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
	putchar(i + '0');
	if (i <= 9)
	{
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	Return (0);
}
