#include "main.h"
/**
 * _memcpy - copies memory from src to dest
 * @dest: destination to copy to
 * @src: to copy from
 * @n: num of bytes to copy
 * Return: return dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0 ; i < n ; i++)
	dest[i] = src[i];
return (dest);
}
