#include <stdio.h>
/**
 * main - Entry point of the programme
 * Return: 0 for sucess
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
	putchar(a);
	for (a = 'A'; a <= 'z'; a++)
	{
	putchar(a);
	}
	}
	putchar('\n');
	return (0);
}
