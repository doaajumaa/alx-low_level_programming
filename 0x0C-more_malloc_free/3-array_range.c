#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * array_range - d
 * @min: mi
 * @max: max
 * Return: h
 */
int *array_range(int min, int max)
{
int i;
int size;
int *m;
if (min > max)
	return (NULL);
size = (max - min) + 1;
m = malloc(sizeof(int) * size);
if (m == NULL)
	return (NULL);
for (i = 0; min <= max; i++)
	m[i] = min++;
return (m);
}
