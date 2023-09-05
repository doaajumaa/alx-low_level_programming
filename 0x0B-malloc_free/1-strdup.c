#include "main.h"
/**
 * _strdup - copy str in memo
 * @str: string to copy
 * Return: returns copy from str
 */
char *_strdup(char *str)
{
int i;
char *copy;
int count = 0;
if (str  == NULL)
	return (NULL);
for (i = 0; str[i] != '\0'; i++)
	count++;
copy =  malloc(sizeof(char) * count + 1);
if (copy == NULL)
	return (NULL);
for (i = 0; str[i] != '\0'; i++)
	copy[i] = str[i];
return (copy);
}
