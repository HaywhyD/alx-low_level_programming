#include "main.h"
#include <stdlib.h>

/**
* free_grid - frees memory allocated for a 2D array of integers
* @grid: pointer to the 2D array to be freed
* @height: height of the 2D array
*/
void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
{
free(grid[i]);
}
/* Free memory allocated for the rows of the 2D array */
free(grid);
}
