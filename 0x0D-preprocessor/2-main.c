#include <stdio.h>

/**
 * prints the name of the file it was compiled from
 *
 * return 0
 */
int main(void)
{
	printf("%S\n", __file __)
	return 0;
}
