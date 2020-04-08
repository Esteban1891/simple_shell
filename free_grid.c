#include "shell.h"

/**
 * free_grid - allocates a grid, make space and free space
 * @grid: takes in width of grid
 * @height: height of grid
 * Return: grid with freed spaces
 */

void free_grid(char **grid)
{
	int i = 0;

	while (grid[i] != NULL)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
	grid = NULL;
}

