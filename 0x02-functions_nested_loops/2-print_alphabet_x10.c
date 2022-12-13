#include "main.h"
/**
 *print_alphabet_x10 - Entry point of the programm
 *Return: 0 for sucess
 */
void print_alphabet_x10(void)
{
	int a, co;

	co = 0;
	while (co < 10)
	{
	for (a = 'a'; a <= 'z'; a++)
	{
	_putchar(a);
	}
	co++;
	_putchar('\n');}
}
