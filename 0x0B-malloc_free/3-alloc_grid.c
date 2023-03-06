#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - allocates to a grid
 * @width: width
 * @height: height
 *
 * Return: pointer to array, NULL otherwise
 */

int **alloc_grid(int width, int height)
{

	int **grid;
	int i, a;

	i = 0;
	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(height * sizeof(*grid));
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}
	while (i < height)
	{
		grid[i] = malloc(width * sizeof(**grid));
		if (grid[i] == NULL)
		{
			i--;
			while (i >= 0)
			{
				free(grid[i]);
				i--;
			}
			free(grid);
			return (NULL);
		}
	
		a = 0;
		while (a < width)
		{
			grid[i][a] = 0;
			a++;
		}
		i++;
	}
	i = 0;
	return (grid);
}
