#include "main.h"
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
	exite(98);
else
	return (b);
}
