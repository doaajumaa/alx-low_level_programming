#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - j
 * @b: pointer to
 * Return: returns
 */
void *malloc_checked(unsigned int b)
{
char *m;
m = malloc(b);
if (m == NULL)
	exit(98);
else
	return (m);
}
