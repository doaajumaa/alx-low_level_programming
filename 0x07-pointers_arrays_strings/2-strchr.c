#include "main.h"
/**
 *_strchr - seaarches for c in s
 * @s: string to search in
 * @c: char to search for
 * Return: returns the s containting c
 */
char *_strchr(char *s, char c)
{
int i;
for (i = 0 ; s[i] >= '\0' ; i++)
{
	if (s[i] == c)
	{
		return (s + i);
	}
}
return ('\0');
}