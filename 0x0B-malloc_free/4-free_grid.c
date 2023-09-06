#include "main.h"
/**
 * free_grid - free fun
 * @grid: eiie
 * @height: the h
 * Return: return0
 */
void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
	free(grid[i]);
free(grid);
}
