#include <stdio.h>
/**
 * main - represent Entry point
 * Return: 0 for sucess
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z' ; a++)
	{
	if (a == 'q' || a == 'e')
	{
	continue;
	}
	putchar(a);
	}
	putchar('\n');
	return (0);
}
