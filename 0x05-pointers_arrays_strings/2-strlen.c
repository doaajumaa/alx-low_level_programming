#include "main.h"
#include <string.h>
/**
 * _strlen - counts the length of str
 * @s: string to count it's length
 * Return: the length of string
 */
int _strlen(char *s)
{
int i = 0;
while (s[i] != '\0')
	i++;
return (i);
}

