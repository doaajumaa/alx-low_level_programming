#include "main.h"
/**
 * create_array - reserve loction wih malloc
 * @size: size of arr
 * @c: arr content
 * Return: retturns pointer to reserved area
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *arr;
if (size == 0)
	return (NULL);
arr = malloc(sizeof(char) * size);
if (arr == NULL)
	return (NULL);
for (i = 0; i < size; i++)
	arr[i] = c;
return (arr);
}
