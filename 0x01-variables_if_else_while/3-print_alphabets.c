#include <stdio.h>
/**
 * main - Represent entry point to the program
 * Return: 0 for sucess
 */
int main(void)
{
	char a;
	for (a = 'a'; a <= 'z' ; a++)
	putchar(a);
	for (a = 'A'; a <= 'Z'; a++)
	putchar(a);
	putchar('\n');
	return (0);
}
