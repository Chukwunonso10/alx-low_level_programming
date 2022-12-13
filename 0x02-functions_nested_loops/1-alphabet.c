#include "main.h"
/**
 * print_alphabet - Entry point into the program
 *
 * Return: 0 for sucess
 */
void print_alphabet(void)
{
	char a;
	for (a = 'a'; a <= 'z'; a++)
	putchar(a);
	putchar('\n');
	return (0);
}
