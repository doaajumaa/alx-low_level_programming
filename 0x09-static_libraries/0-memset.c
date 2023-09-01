#include "main.h"
/**
 * _memset - fills memo with b
 * @s: pointer to memo location
 * @b: the constant
 * @n: num of bytes to fill
 * Return: returns pointer to memo filled
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0 ; i < n ; i++)
s[i] = b;
return (s);
}
