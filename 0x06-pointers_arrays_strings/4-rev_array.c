#include "main.h"
/**
 * reverse_array - reverse an arrey of n
 * @a: the array to reverse
 * @n: number of array elements
 * Return: retirns void
 */
void reverse_array(int *a, int n)
{
int i;
int j;
for (i = 0 ; i < n ; i++)
{
j = a[i];
a[i] = a[n - 1 - i];
a[n - 1 - i] = j;
}
}
