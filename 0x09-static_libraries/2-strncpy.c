#include "main.h"
/**
 * _strncpy - Copy source to destination
 *  @dest: destination to copy to
 *  @src: to copy
 *  @n: num of chars to copy
 *  Return: return new dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0 ; i < n && src[i] != '\0' ;  i++)
	dest[i] = src[i];
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
