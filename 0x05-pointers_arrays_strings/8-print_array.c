#include "main.h"
#include <stdio.h>
/**
 * print_array - prints any n elements of a
 * @a: array
 * @n: the number of elements to print
 * Return: returns void
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
	printf("%d", a[i]);
	if (i < n - 1)
		printf(", ");
}
printf("\n");
}
