#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - function to allocate memory to grid
 * @grid: int pointer
 * @height: int arg
 * Return: grid of 0s
 */

void free_grid(int **grid, int height)
{
	int y;

	if (grid == NULL || grid == 0)
	{
		return;
	}
	for (y = 0; y < height;  y++)
	{
		free(grid[y]);
	}
	free(grid);
}
