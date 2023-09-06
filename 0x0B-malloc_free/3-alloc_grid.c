#include "main.h"
/**
 * alloc_grid - aloocate arry
 * @width: w of arry
 * @height: h of arr
 * Return: pointer to arry
 */
int **alloc_grid(int width, int height)
{
int i, j;
int **output;
if (width <= 0 || height <= 0)
	return (NULL);
output = malloc(sizeof(int *) * height);
if (output == NULL)
	return (NULL);
for (i = 0; i < height; i++)
{
output = malloc(sizeof(int) * width);
if (output == NULL)
{
free(output);
for (j = 0; j <= height; j++)

	free(output[j]);
return (NULL);
}
for (j = 0; j <= width; j++)
output[i][j] = 0;
}

return (output);
}
