#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * _calloc - fun
 * @nmemb: mem
 * @size: s
 * Return: e
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *m;
if (nmemb == 0 || size == 0)
	return (NULL);
m = calloc(nmemb, size);
if (m == NULL)
	return (NULL);
else
	return (m);
}
