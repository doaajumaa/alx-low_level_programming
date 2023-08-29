#include "main.h"
/**
 * _memcpy - copy src to dest
 * @dest: destination to copy to
 * @src: to copy from
 * @n: num of bytes to copy
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0 ; i < n ; i++)
	src[i] = dest[i];
return (dest);
}
