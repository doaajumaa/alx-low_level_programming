#include "main.h"
/**
 * _strcpy - copies src to dest
 * @dest: pointer to array copy to
 * @src: pointer to array copy from
 * Return: returns the pointer to destinatnion
 */
char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i] != '\0'; i++)
	dest[i] = src[i];
dest[i] = '\0';
return (dest);
}
