#include "main.h"
/**
 * _strncat - concatinate n from src to dest
 *  @dest: destenation to append to
 *  @src: sourse to append
 *  Return: returns pointer to concatinated dest
* @n: number of chars to append to dest
*/
char *_strncat(char *dest, char *src, int n)
{
int count;
int length = 0;
for (count = 0; dest[count] != '\0' ; count++)
	length++;
for (count = 0 ; count < n && *src != '\0' ; count++)
{
	dest[length + count] = src[count];
}
dest[length + count] = '\0';
return (dest);
}
