#include "main.h"
/**
 * _strcat - append src to dest
 *  @dest: string to be appended to
 *  @src: the source string to apped tp dest
 *  Return: returns the concatinate
 */
char *_strcat(char *dest, char *src)
{
int countdest = 0;
int countsrc = 0;
int i;
for (i = 0 ; src[i] != '\0' ; i++)
	countdesrc++;
for (i = 0 ; dest[i] != '\0' ; i++)
countdest++;

for (i = 0 ; i <= countdest ; i++)
	dest[destcont + i] = src[i];
return (dest);
}
